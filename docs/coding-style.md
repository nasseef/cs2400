 # CS 2400 C++ Coding Style
 ### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

* Use a consistant style for naming identifiers
  * ```camelCase``` or ```snake_case```
* Use meaningful variable names that describe the content of the variable, the purpose of the function, or the class.
  * ```employeeSalary``` instead of ```es```
  * ```Employee``` instead of ```e```
* Add a space around operators
  * ```total = amount + tax;``` instead of ```total=amount+tax;```
* Add documentations throughout your program
  * Start by adding documentation for the whole program at the top of the file that includes:
    * File name
    * Author name
    * Date
    * Description of the program
* Each statement should be on a line by itself
* Add documentation, for each of the functions, above the prototype. We will be using [Doxygen](http://www.doxygen.nl/manual/docblocks.html) style of documentation. The comments should start with `/**`.  For example:

  ```cpp
  /**
   *  Function:   findSpaceCost
   *              calculates and returns the charge for shipping cargo
   *              between two planets.
   *
   *  @param distance - distance in miles between two planets
   *  @param weight   - weight in pounds of item being shipped
   *  @return - the space cost in dollars
   */
  double finSpaceCost(double distance, double weight);

  ```

* Use triple slashes `///` for [Doxygen](http://www.doxygen.nl/manual/docblocks.html) style line comments
* Always prompt the user for input
* The program output should be readable and clearly labeled
* Use lower case letters for identifier names. If an identifier has multiple words, then use one of the styles mentioned above for naming identifiers (example: ```employeeSalary``` instead of ```es```)
* All constants must be in upper case letters. For example: ```const double OHIO_TAX = 0.07;```. Use underscore character to separate words in the constant name.
* Indent blocks for ```if```, ```while```, ```for``` etc. For example:

  ```cpp
  if (hours <= 40) {
      wages = hours * hourlyRate;
  }
  ```

* Keep lines at a reasonable length
* Break long statements into either multiple statements or multiple lines
* Skip lines between logical groups of statements
* Limit the scope of variables. Use local variables
* Avoid global variables
* Always initialize your variables before using them
* Always check for failure when you open a file

  ```cpp
  inStream.open("somefile.txt");
  if (inStream.fail()) { /// check for failure
      cout << "File is not accessable" << endl;
      exit(1);
  }
  ```
    
* Always compile with ```-Wall``` option to detect and eliminate all warnings

## Classes and Structures

* Capitalize class and structure names
* All member variables should be in the private section of the class
* Always include a default constructor
* When using dynamic allocation always include a destructor and a copy constructor
* Always include getter (accessors) and setters (mutators)
* When using separate compilation, always guard against multiple includes of the same class (using `#ifndef`)
* Class example:

  ```cpp
  #ifndef STUDENT_H
  #define STUDENT_H
  class Student {
  public:
      /** Default constructor
       * Initializes the id to 0 and the name to "N/A"
       */

      /** getID - an accessor for the id
       *  @return - the student's id value
       */  
      int getId();

      /**
       * getName - an accessor for the name
       * @return - the student's name
       */ 
      string getName();

      /**
       * setId - a mutator for the student id
       * @param newId - the newId must be a valid id >= 0
       */ 
      void setId(int newId);

      /**
       * setName - a mutator for the student name
       * @param newName - a valid name string != ""
       */
      void setName(string newName);

  private:
      int id;
      string name;
  };
  #endif
  ```
