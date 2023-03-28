
 ## CS 2400 (Introduction to Computer Science I), Ohio University, EECS

 #### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

  Welcome to CS 2400. In this class we will be writing programs in C++. In order to prepare for class, you need to install a C++ compiler and other software tools on your own machines. Please keep in mind that all the tools needed for the class are also available on our lab machines (Stocker 107 and 307A). The labs are open all day and can be accessed [remotely](#linux-commands-and-remote-loginfile-transfer). We will also be using [Git/GitHub](#gitgithub) for source/version control. Your projects (homework assignments) will be in our GitHub [2400 classroom](https://github.com/2400-fl-19).

  **Important:** In order to be able to use your own computer to do the assignments and examples in this class you need to install the following:
  - C/C++ compiler like GNU C++  or MinGW 
  - Git tools
  - A text editor such as VSCode
  
  > Installation instructions are outlined below.

  **All examples discussed in class will be posted on this site.**

---

- [CS 2400 (Introduction to Computer Science I), Ohio University, EECS](#cs-2400-introduction-to-computer-science-i-ohio-university-eecs)
    - [Contact: Nasseef Abukamail (abukamai@ohio.edu)](#contact-nasseef-abukamail-abukamaiohioedu)
  - [Installing **C/C++** compiler](#installing-cc-compiler)
  - [Compiling and running the examples in this repository](#compiling-and-running-the-examples-in-this-repository)
    - [Create a `Makefile` and use the `make` command](#create-a-makefile-and-use-the-make-command)
    - [Running a program:](#running-a-program)
  - [Recommended Editors](#recommended-editors)
  - [VS Code Customization](#vs-code-customization)
    - [Extensions](#extensions)
    - [Configure the compiler to run in a terminal](#configure-the-compiler-to-run-in-a-terminal)
    - [Configure Code Runner to use `-Wall -std=c++11 -g`](#configure-code-runner-to-use--wall--stdc11--g)
    - [Configure the Debugger](#configure-the-debugger)
      - [Mac Setup](#mac-setup)
      - [Running The Debugger in WSL](#running-the-debugger-in-wsl)
    - [Helpfull user snippets](#helpfull-user-snippets)
  - [Git/GitHub](#gitgithub)
    - [Git Installation](#git-installation)
    - [Create a GitHub account](#create-a-github-account)
  - [Linux Commands and Remote Login/File Transfer](#linux-commands-and-remote-loginfile-transfer)
  - [SFTP Client](#sftp-client)
  - [Coding Style](#coding-style)

### Installing **C/C++** compiler

---

- `Mac`:
    Start the terminal program (Search for `Terminal`). Install the `Command Line Tools` using the command `xcode-select --install`. This will also install `git`. Alternatively, you can install Xcode and install the `Command Line Tools` after you run it the first time.
- `Linux`: Should already come with GNU g++ preinstalled.

- `Windows`: 
  
  
  - [Install Windows Subsystem for Linux](docs/Windows10-WSL.md) (Recommended)
  
    This will give you a `bash` terminal closer to what Mac and Linux has. If you go through the instructions listed there you can use the same instructions/commands as Linux/Mac that are shown in the rest of this readme file.


### Compiling and running the examples in this repository

These are the programs discussed in class (demos). I encourage you to download them and try them. You may want to modify them and see what happens. Maybe design your own program using the concepts discussed in class.

All programs should be compiled with the following command:

```console
    g++ -Wall filename.cc
```

**To compile with C++11 use the following command:**

```console
   g++ -Wall -std=c++11 filename.cc
```

> To debug your program, add "-g" option to either of the above commands.

#### Create a `Makefile` and use the `make` command 
Create a file called `Makefile` (no extension). See the sample file to for a program called `test.cc`. [Makefile](docs/Makefile)


**To compile your program with make:**

```console
    make
```



#### Running a program:

```console
    ./a.out 
```

### Recommended Editors

---

You need a good programming editor (**DO NOT USE WINDOWS Notepad**). I recommend either Visual Studio Code. It is free and highly customizable. See below for other editors.

- [Visual Studio Code](https://code.visualstudio.com/) (Recommended)
- [Atom Editor](https://atom.io)
- [Emacs](https://www.gnu.org/software/emacs)
- [Vim](https://www.vim.org)
- [nano](https://www.nano-editor.org/)
- and many others ....

### VS Code Customization

---

#### Extensions

- C/C++ extension from Microsoft (**Required**)
- Code Runner (optional)
- Code Spell Checker (optional)

#### Configure the compiler to run in a terminal

- Open `Preferences` and click on `Settings`
- Find the entry called `Run Code Configuration` (Available if you installed `Code Runner` extension)
- Enable the options:
  - `Run in Terminal`
  - `Save All Files Before Run`
  - `Save File Before Run`

#### Configure Code Runner to use `-Wall -std=c++11 -g`

- Go to the Settings menu
- Search for `Code-Runner: Executor Map` and click on `Edit in Settings.json`
- To be able to compile and run your program using the `Run Code` icon or the shortcut `Ctrl-Alt N`, add the following lines right after the opening brace `{`  in `Settings.json` and save it.
  
  ```json
  "code-runner.executorMap": {
        "c": "cd $dir && gcc -Wall $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "cpp": "cd $dir && g++ -Wall -std=c++11 -g $fileName && ./a.out"
    },
  ```
    > On Windows use `./a.exe` instead of `./a.out`.   `-g` option is needed to use a debugger such as `gdb` or `lldb`.

#### Configure the Debugger

**The debugger is configured for every project separately. You must open the project folder in order to use it.**

The debugger depends on what executable file you set up in the previous step. Make sure you open the folder (not the program) where your program resides. You need to do these steps for every project you want to debug.
##### Mac Setup
- Install the extension `CodeLLDB`
- Click on the debug icon on the left
- Click on `Run and Debug`
- Seclect `C++ (GDB/LLDB)
- Select `lldb - Build and debug active file`
- Edit the file `launch.json` inside the `.vscode` directory and make the following changes:
```json
  "configurations": [
        {
            "name": "launch",
            "type": "lldb",
            "request": "launch",
            "program": "${fileDirname}/a.out",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${fileDirname}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "lldb",
            "preLaunchTask": "C/C++: clang++ build active file"
        }
```

> Input interaction will be done in the terminal window within VScode.
- Edit the `tasks.json` file inside the `.vscode` directory and change the `args` section to the following:
  ```json
  "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/a.out"
          ],
  ```

##### Running The Debugger in WSL
- Make sure you installed g++ and the debugger tools when you installed wsl [https://github.com/nasseef/cs2400/blob/main/docs/Windows10-WSL.md#tools](https://github.com/nasseef/cs2400/blob/main/docs/Windows10-WSL.md#tools)
- Open a WSL terminal 
  - Open PowerShell
  - Type `wsl`
- Navigate to the project directory (it helps to create a symbolic link to the directory where you stored all your projects). Instructions on how to create a symbolic link can be found here: [https://github.com/nasseef/cs2400/blob/main/docs/Windows10-WSL.md#accessing-your-windows-files] (https://github.com/nasseef/cs2400/blob/main/docs/Windows10-WSL.md#accessing-your-windows-files)
- Start VS Code from the project directory
- Example (Assuming your project directory is called `project1`):
  ```console 
    cd project1
    code .
  ```
  
- Open the project file `.cc` or `.cpp` file
- Click on the debug icon on the left
- Click on `Run and Debug`
- Seclect `C/C++: g++ build and debug active file`
  
This setup will use your file name as an executable (without the extension). If you want to use `a.out` as your executable, change `${fileBasenameNoExtension}` to `a.out` in the file `.vscode\task.json`.

From this point on, you can click on the green arrow to start debugging. Make sure you set a break point. To set a break point inside your code, click to the left of the line number. A red circle should appear.

> Note: you must open the project folder to debug your project.
> The above steps must be repeated for every project.



#### Helpfull user snippets
VSCode already has built-in snippets such as a *for* loop, *class*, etc. However, you can create your own. Open **User Snippets** under **Preferences**. If you are editing a C++ file then the file **cpp.json** should open automatically. Otherwise, you may have to select it. Here is a sample of snippets that I use [cpp-snippets.json](docs/cpp-snippets.json).

### Git/GitHub

---

We will be using Git/GitHub for version/source control (track changes to code). Here are some excellent tutorials that introduce the concepts and shows the most important commands you need to learn.

https://www.youtube.com/watch?v=MJUJ4wbFm_A

https://www.youtube.com/watch?v=uR6G2v_WsRA


#### Git Installation

https://git-scm.com/download/

> Note: Git might already be installed on your Mac or Linux machines.

#### Create a GitHub account

- Create a GitHub account here [GitHub](https://github.com)

- #### Generate a Personal Access Token (PAT) to be able to use GitHub remotely [Personal Access Token](docs/GitHub-token.md)

### Linux Commands and Remote Login/File Transfer

---

Here are some Linux commands and instructions to access our system remotely.

[Linux Commands and Remote Access](docs/linux.md)

### SFTP Client

---

Occasionally you need to transfer your files from your machine to our Ubuntu system and vice versa. In order to do this you need to use an SFTP (Secure File Transfer Protocol) client. Here are few SFTP clients:

- [WinSCP (Windows only)](https://winscp.net)
- [Fetch (Mac only)](https://fetchsoftworks.com/)
- [Cyberduck](https://cyberduck.io/)

### Coding Style

---

It is very important to follow a good/standard coding style. Refer to this document when writing code.
[CS 2400 Coding Style](docs/coding-style.md)
