-----Main Function Goals------
initialize array of students
not required but get the amount of lines in the dat file for 
creating the class instances using a seprate function
then loop over each student send in data to setStudent
ouput a full report as well as a short report
-----Main Function Input------
a dat file that follows the assignment requirements
I used the one provided on canvas
then also find the amount of lines in that data file
-----Main Function output------
the output is going to be the reports but that is handled by the student class.
-----Amount of Lines Function-----
open the file and then use a built in function to get the amount of lines
and return that to main
this function requires no input and only output is the amount of lines
-----Set student goals------
using stringstream take the line and split it into different respective variables
this is the tedious but only way I can think of at my level
then if needed call setter methods from the date and address class respectivally while some variables can just be assigned to their location
for the dates another stringstream is going to be used to split the month day and year down further and convert them to integers
-----Get Full report------
using ofstream open up the full report file and only append to it,
for the full report write out every thing in a clean readable manner while using
getters where I can.
close the file once you are done with it. 
-----Full report output-----
the output is going to be a text file containing said organized data.
----Get short report-----
the short report is the same idea as full, open the file and only append the first and lase names to it as well as a divisor line. 
----Get Short output----
the ouput is the text file with first and last names. 


Class Date:
the date class is going to contain the month year and day with a constructor to init the values to zero, each will get a setter and getter method. 

Class Address:
the address class is a litte more complicated with all values being strings and private
the constructor will initiliaze empty variables and there will be one set method for the entire class but each var will have its own getter method

Class student:
this is the biggest class, the birthday and grad date will be instances of the date class on the heap and the address will be an instance of the address class on the heap as well. 

Notes:
the whole project techinally does what is required but Im not understanding when to delete heap memory and where to do so. I belive I have initilized everything that is asked on the heap, but Valgrind is giving me some weird errors. 
find a less tedious way of splitting variables? 
code looks very messy, Clean up and seperate if time