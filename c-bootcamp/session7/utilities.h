#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declaring this value so I can use it in different places
#define buffer_size 100

/**
 * @brief Struct to hold each daily reading, contains the date as a string
 *        and the bloodIron as a floating point number.
 *
 */
typedef struct {
	char date[20];
	float bloodIron;
} reading;

/**
 * @brief Adapted version of the tokeniseRecord function which you should now be familiar with - this one is adapted for this data file
 *        as it has fewer outputs and gives you the bloodIron as a float
 *
 * @param input the line of the file to be split
 * @param delimiter what character it should split on
 * @param date the place where the date will be stored
 * @param bloodIron the place where the bloodIron will be stored.
 */
void tokeniseRecord(const char *input, const char *delimiter, char *date, float *bloodIron) {
	// Create a copy of the input string as strtok modifies the string
	char *inputCopy = strdup(input);

	// Tokenize the copied string
	char *token = strtok(inputCopy, delimiter);
	if (token != NULL) {
		strcpy(date, token);
	}

	token = strtok(NULL, delimiter);
	if (token != NULL) {
		// turns the blood iron into a float - similar to atoi().
		// we have to tell C that bloodIron is a pointer so it stores it.
		*bloodIron = atof(token);
	}

	// Free the duplicated string
	free(inputCopy);
}

// SUGGESTED FUNCTIONS

/**
 * @brief Opens the file in the correct mode
 *
 * @param filename the name of the file to open
 * @param mode the mode (r/w/a/r+/w+/a+)
 * @return FILE* The file object to store the opened file in.
 */
FILE *open_file(char *filename, char *mode) {
	FILE *file = fopen(filename, mode);

	if (!file) {
		printf("Error: File could not be opened\n");
		return NULL;
	}

	return file;
}

/**
 * @brief Reads the data from the input file into an array of structs
 *
 * @param inputFile the open file object
 * @param dataArray the array of readings
 * @return int Returns the number of readings from the file
 */
int read_file(FILE *inputFile, reading *dataArray) {
	char line[buffer_size];
	int counter = 0;

	while (fgets(line, buffer_size, inputFile)) {
		tokeniseRecord(line, ",", dataArray[counter].date, &dataArray[counter].bloodIron);
		counter++;
	}

	return counter;
}

/**
 * @brief Checks that there was data for each part of each reading in the file
 *
 * @param dataArray The array of data from the file
 * @param numReadings The number of readings in the array
 * @return int Return 0 if there are no errors, 1 if you find an error.
 */
int data_checker(reading *dataArray, int numReadings) {
	for (int i = 0; i < numReadings; i++) {
		if (dataArray[i].bloodIron == 0) {
			return 1;
		}
	}

	return 0;
}

/**
 * @brief Calculates and returns the mean of the readings in the array
 *
 * @param dataArray The array of data from the file
 * @param numReadings The number of readings in the array
 * @return float The mean of the readings.
 */
float find_mean(reading *dataArray, int numReadings) {
	float mean = 0;

	for (int i = 0; i < numReadings; i++) {
		mean += dataArray[i].bloodIron;
	}

	return mean / numReadings;
}

/**
 * @brief Finds and returns the highest blood iron reading
 *
 * @param dataArray The array of data from the file
 * @param numReadings The number of readings in the array
 * @return float The highest blood iron reading
 */
float find_highest(reading *dataArray, int numReadings) {
	float highest = 0;

	for (int i = 0; i < numReadings; i++) {
		if (dataArray[i].bloodIron > highest) {
			highest = dataArray[i].bloodIron;
		}
	}

	return highest;
}

/**
 * @brief Finds and returns the lowest blood iron reading
 *
 * @param dataArray The array of data from the file
 * @param numReadings The number of readings in the array
 * @return float The lowest blood iron reading
 */
float find_lowest(reading *dataArray, int numReadings) {
	float lowest = 0;

	for (int i = 0; i < numReadings; i++) {
		if (dataArray[i].bloodIron < lowest) {
			lowest = dataArray[i].bloodIron;
		}
	}

	return lowest;
}

/**
 * @brief Ask the user for the month to find, and then print out all readings containing that month.
 *
 * @param dataArray The array of data from the file
 * @param numReadings The number of readings in the array
 */
void monthly_iron(reading *dataArray, int numReadings) {
	char line[buffer_size];
	char month[buffer_size];

	printf("Enter a month: ");
	fgets(line, buffer_size, stdin);
	sscanf(line, " %s ", month);

	for (int i = 0; i < numReadings; i++) {
		if (strstr(dataArray[i].date, month)) {
			printf("%s - Blood iron: %.1f\n", dataArray[i].date, dataArray[i].bloodIron);
		}
	}
}