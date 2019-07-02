 # Ubuntu System Linux Commands, Compiling C++ Programs, & Remote Login

### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

- [Linux command](#linux-command)
  - [Directory commands](#directory-commands)
  - [File commands](#file-commands)
  - [Editing Files](#editing-files)
  - [Compiling and Running C++ Programs](#compiling-and-running-c-programs)
- [Remote Login via SSH (Secure Shell)](#remote-login-via-ssh-secure-shell)
    - [Windows (SSH)](#windows-ssh)
    - [Mac/Linux (SSH)](#maclinux-ssh)
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
If you are using Windows, download [Putty](https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html). If you are using Linux or a Mac you should already have ```ssh``` installed on your system and it should be accessible from a terminal.

#### Windows (SSH)
* Run ```Putty.exe```
* Enter one of our machine addresses ```oddxx.cs.ohio.edu``` (replace ```xx``` with ```01, 03, 05, etc.```)
* You should be promted for your user name and password
* After you login you should be in your home directory. You can now execute any of the commands above.

#### Mac/Linux (SSH)
* Open a terminal window
* Run the command ```ssh <loginname>@oddxx.cs.ohio.edu``` (make sure you use your login name and replace ```xx``` with ```01, 03, 05, etc.```)
* After you enter your password you should be in your home directory. You can now execute any of the commands above.

