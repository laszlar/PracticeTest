// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string> 
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

void TotalGrade(float &userCorrectAnswers);

int main()
{
	//inital setup
	char userChoice;
	float correctAnswers = 0.0f;

	do {
		//////////////////////
		/////Question #1//////
		//////////////////////

		int childCost = 5;
		int adultCost = 7;
		int numChild = 5;
		int numAdult = 7;

		//adjustable variables
		int totalCost;
		int totalAdultCost;
		int totalChildCost;
		int userGuess;

		//calculations are here below
		totalChildCost = childCost * numChild;
		totalAdultCost = adultCost * numAdult;
		totalCost = totalChildCost + totalAdultCost;

		//output to terminal/console
		cout << "Question #1\n";
		cout << "A group of 5 children and 7 adults are going to a movie. Child tickets cost $5," << "\n" <<
			"and adult tickets cost $7. How much will the movie tickets cost in all?" << "\n";
		cout << "Answer: ";
		cin >> userGuess;

		if (userGuess == totalCost)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "Incorrect. The total cost is: " << totalCost;
		}

		//////////////////////
		/////Question #2//////
		//////////////////////

		int answer;

		//disregarding all this, because it's literally testing the user's logic capacity
		//list of heights
		/*float array[] = { 5.11f, 4.8f, 5.2f, 5.6f, 4.5f };

		//find the lowest height 
		float smallestValue = array[0];
		for (int x = 1; x < sizeof(array)/sizeof(array[0]); ++x)
		{
			if (array[x] < smallestValue)
			{
				smallestValue = array[x];
			}
		}
		*/

		cout << "\n\nQuestion #2";
		cout << "\nAllan is taller than Claire, but shorter than both Kishan and Mike.\n";
		cout <<	"Kishan is shorter than Mike. Mercedes is shorter than Claire. Who is the shortest?\n";
		cout << "1. Allan\n";
		cout << "2. Mercedes\n";
		cout << "3. Claire\n";
		cout << "4. Kishan\n";
		cout << "5. Mike\n";
		cout << "Please choose the correct corresponding number.\n";
		cin >> answer;

		if (answer == 2)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//////////////////////
		/////Question #3//////
		//////////////////////

		//initializing all the variables
		int totalHouses = 80;
		int twoCarGarages = 50;
		int swimmingPool = 40;
		int bothGarageSwimmingPool = 35;

		//additional variables
		int justSwimmingPool;
		int justTwoCarGarages;
		int neitherPoolGarage;
		int totalGaragePool; 
		int userAnswer3;

		//calculations
		justSwimmingPool = swimmingPool - bothGarageSwimmingPool;
		justTwoCarGarages = twoCarGarages - bothGarageSwimmingPool;
		totalGaragePool = justSwimmingPool + justTwoCarGarages + bothGarageSwimmingPool;
		neitherPoolGarage = totalHouses - totalGaragePool;

		cout << "\n\nQuestion #3\n";
		cout << "Of the 80 houses in a development, 50 have a two-car garage,\n";
		cout << "40 have an in-the-ground swimming pool, and 35 have both a two-car garage\n";
		cout << "and an in - the - ground swimming pool.How many houses in the development\n";
		cout << "have neither a two - car garage nor an in - the - ground swimming pool ?\n";
		cout << neitherPoolGarage << '\n';

		cin >> userAnswer3;

		if (userAnswer3 == neitherPoolGarage)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//////////////////////
		/////Question #4//////
		//////////////////////

		//initializing variables
		float tax = 0.08f;
		float bill = 25.0f;
		float tip = 0.10f;

		//adjustable variables
		float total;
		float tipPaid;
		float taxPaid;
		float userAnswer4;

		//calculations
		//find tip before total first! 
		tipPaid = bill * tip;
		taxPaid = bill * tax;
		total = bill + taxPaid + tipPaid;

		cout << "\n\nQuestion #4";
		cout << "\nYour dinner bill is $25 before tax. The tax rate is 8%.\n";
		cout << "You decide to give the waiter 10 % tip based on your pre-tax bill.\n";
		cout << "What is the TOTAL amount of cash you should pay?\n";
		cout << total << "\n";
		cin >> userAnswer4;

		if (userAnswer4 == total)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//////////////////////
		/////Question #5//////
		//////////////////////

		//variables
		float sqFeetInInches = 144.0f;
		float totalSqFeetInInches = 288.0f;
		
		//adjustable variables
		float sqFeet;
		float userAnswer5;

		//calculations
		sqFeet = totalSqFeetInInches / sqFeetInInches;

		cout << "\n\nQuestion #5";
		cout << "\nHow many sq feet are there in 288 square inches?\n";
		cout << "Note that 1 foot = 12 inches.\n";
		cout << sqFeet << "\n";
		cin >> userAnswer5;

		if (userAnswer5 == sqFeet)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//////////////////////
		/////Question #6//////
		//////////////////////

		//variables
		int slowSpeedMiles = 40;
		int slowSpeed = 20;
		int fastSpeedMiles = 180;
		int fastSpeed = 60;

		//adustable variables
		int slowTimeTaken;
		int fastTimeTaken;
		int totalTime;
		int totalDistance;
		int averageSpeed;
		int userAnswer6;

		//calculations
		slowTimeTaken = slowSpeedMiles / slowSpeed;
		fastTimeTaken = fastSpeedMiles / fastSpeed;
		totalTime = slowTimeTaken + fastTimeTaken;

		//just need to find average speed. Average speed = distance/time. 
		totalDistance = slowSpeedMiles + fastSpeedMiles;
		averageSpeed = totalDistance / totalTime;

		cout << "\n\nQuestion #6\n";
		cout << "A car drives 40 miles on local roads at 20 mph, and 180 miles on the highway at 60 mph.\n";
		cout << "What is the average speed of the trip?\n";
		cout << averageSpeed << "\n";
		cin >> userAnswer6;

		if (userAnswer6 == averageSpeed)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//////////////////////
		/////Question #7//////
		//////////////////////

		//variables
		int classAverageBefore = 77;
		int classAverageAfter = 78;
		int totalStudents = 17;
		int totalStudentsWithoutJohn = 16;

		//adjustable variables 
		int totalGradeBefore;
		int totalGradeAfter;
		int differenceBetweenTestScores;
		int userAnswer7;


		//calculations
		//multiplacation needed here to find x ... x/16 = 77
		//whereas with John.. x/17 = 78.
		//find the x value first between the two sets of tests, and compare
		totalGradeBefore = totalStudentsWithoutJohn * classAverageBefore;
		totalGradeAfter = totalStudents * classAverageAfter;
		differenceBetweenTestScores = totalGradeAfter - totalGradeBefore;

		cout << "\n\nQuestion #7\n";
		cout << "There are 17 students in a class. On the day the test was given, John was abset.\n";
		cout << "The other students took the test, and their average score was 77. The next day, \n";
		cout << "John took the test, and with his grade included, the new average was 78.\n";
		cout << "What is John's grade on the test?\n";
		cout << differenceBetweenTestScores << "\n";
		cin >> userAnswer7;

		if (userAnswer7 == differenceBetweenTestScores)
		{
			cout << "You answered correctly!";
			correctAnswers++;
		}
		else
		{
			cout << "You answered incorrectly!";
		}

		//Demonstrate final grade!
		TotalGrade(correctAnswers);

		cout << "\n" << "Would you like to restart this test? <Y or N>";
		cin >> userChoice;
	} while (userChoice == 'Y' || userChoice == 'y');
	return 0;
}

void TotalGrade(float &userCorrectAnswers)
{
	float finalScore;
	int totalAnswers = 7;

	finalScore = (userCorrectAnswers / totalAnswers) * 100;

	cout << "\n\nFinal Grade!\n";
	cout << "Your grade: " << finalScore << "%\n";
}

