## Installing minGW C/C++ compiler on Windows
### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---
1. Go to http://www.minGW.org
2. Click on `Download Installer`
This should download an executable program called `mingw-get-setup.exe`
3. Run the program `mingw-get-setup.exe`
Keep the default installation directory `C:\MinGW`.
4. The `MinGW Installation Manager` will be displayed
5. Select `mingw32-base` and mark for installation
6. Select `mingw32-gcc-g++` and mark for installation
7. Click on `Installation` menu option (upper left-hand corner)
8. Click on `Apply Changes` (This will take few minutes)
9. Close the dialog box and the `mingGW Installation Manager`
10. Configure the Path to use gcc/g++ compilers
    1. Open a terminal window (search for `CMD` | select `CMD.EXE`)
    2. Type the following (assuming you did not change the installation directory in step 3)
        ```console
        setx PATH "%PATH%;C:\MinGW\bin"
        ```
        > Replace `C:\MinGW` with whatever directory you used in step 3

        If the above command does not work, then edit your path manually (Windows 10).

        `Control Panel` | `System` | `Advanced System Setting` |
`Environment Variables`

	    Under System Variables
       - Windows 10:

            Click on `PATH` | `Edit` | `New`,  Type: `C:\MinGW\bin`

    	- Windows 7:

            Add the following at the end of the PATH:
			`;C:\MinGW\bin`

		    > Note the semicolon.

        Save and exit

    3. Close the terminal and restart it (step 11)

11. Type "g++"  or "gcc" and hit enter. You should get the following error:

    ```console
    g++: fatal error: no input files
    compilation terminated.
    ```

    > This indicates that the compiler has been installed correctly but you did not supply a program to compile. You are done!!!

---

### Try the new compiler

- Create a program in an editor of your choice, save it in a directory of your choice
- Start the terminal window (step 11 above)
- Change to the directory where the program is stored (using the `cd` command)
- Compile and run the program (assuming the name of your program is `first.cc`)
    ```console
    g++ -Wall first.cc
    a.exe
    ```
    > note that the executable is different from the Linux version (a.out)

    You may want to change the executable name when you compile:
    ```console
    g++ -Wall first.cc -o first.exe
    first.exe
    ```

    > For the C compiler, use `gcc` and name your program with `.c` extension. If you encounter any issues please let me know.

---

### Using the make utility

The mingGW tools comes with a make utility called `mingw32-make`. This is what you want to run instead of `make`. However, You can create a symbolic link to `mingw32-make` called `make`

- In Windows, click on the search icon at the bottom of you screen and type `cmd` (Do not hit enter). It should list the choice `CMD.exe`

- Right-click on `CMD.exe` and select `Run as administrator`
- Go to the mingw directory and create a sybmolic link:
    ```console
    cd c:\MinGW\bin
    mklink make.exe mingw32-make.exe
    ```

If any of these instructions are not clear, please let me know or stop by.
