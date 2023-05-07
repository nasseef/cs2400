 # Ubuntu System Linux Commands, Compiling C++ Programs, & Remote Login

### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

- [Ubuntu System Linux Commands, Compiling C++ Programs, & Remote Login](#ubuntu-system-linux-commands-compiling-c-programs--remote-login)
    - [Contact: Nasseef Abukamail (abukamai@ohio.edu)](#contact-nasseef-abukamail-abukamaiohioedu)
  - [Linux command](#linux-command)
    - [Directory commands](#directory-commands)
    - [File commands](#file-commands)
    - [Editing Files](#editing-files)
    - [Compiling and Running C++ Programs](#compiling-and-running-c-programs)
  - [Remote Login via SSH (Secure Shell)](#remote-login-via-ssh-secure-shell)
## Linux command

### Directory commands

Your home directory is located under ```/home/<username>```. If your user/login name is ```jsmith``` then your home directory is ```/home/jsmith```. You are encouraged to create a separate directory for each of your classes and a separate diretory within your class for homeworks and labs.

```console
pwd                       # Show working directory
cd dir1                   # change to directory dir1
cd or cd ~                # go to home directory
cd ..                     # move up one directory
cd ../..                  # move up two direectories
cd ~/dir1                 # go to dir1 under the home directory
cd /home/user/dir1        # go to the specified directory
mkdir dir1                # create a directory named dir1
rmdir dir1                # remove the empty directory dir1
ls                        # List directory content
ls -al                    # list directory with more information
```

### File commands
```console
mv file1.cc file2.cc      # renames file1.cc to file2.cc
rm myfile.cc              # Remove/delete myfile.cc
more myfile.cc            # Display the content of myfile.cc one screen at a time
cat myfile.cc             # Display all the content of myfile.cc
head myfile.cc            # Display the first 10 lines of myfile.cc
head -20 myfile.cc        # Display the first 20 lines of myfile.cc
tail myfile.cc            # Display the last 20 lines of myfile.cc
grep xyz *                # Search all files for the content "xyz"
```

### Editing Files
```console
code filename.cc          # Open filename.cc in VS Code
atom filename.cc          # Open filename.cc in Atom
nano filename.cc          # Open filename.cc in nano
vim  filename.cc          # Open filename.cc in vim
emacs filename.cc         # Open filename.cc in emacs
```

### Compiling and Running C++ Programs

```console
g++ -Wall  myprogram.cc
    # Compiles myprogram.cc and creates the executable a.out
./a.out                   # runs the program
g++ -Wall myprogram.cc -o myprog
    # Compiles myprogram.cc and creats the executable myprog
./myprog                  # runs the program

g++ -std=c++11 -Wall myprogram.cc
    # compiles the program with C++11
```

## Remote Login via SSH (Secure Shell)
If you are using Windows, open `PowerShell`. If you are using Linux or a Mac open a terminal window. 

* Execute the ssh command. Use one of the following commands:
   
  ```console
  ssh <loginname>@pu1.cs.ohio.edu
  ssh <loginname>@pu2.cs.ohio.edu
  ssh <loginname>@pu3.cs.ohio.edu
  ```

  > Use your login name given in the lab
* After you enter your password you should be in your home directory. You can now execute any of the commands above.
