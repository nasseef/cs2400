
 ## CS 2400 (Introduction to Computer Science I), Fall 2019, Ohio University, EECS

 #### Contact: Nasseef Abukamail (abukamai@ohio.edu)

---

  Welcome to CS 2400. In this class we will be writing programs in C++. In order to prepare for class, you need to install a C++ compiler and other software tools on your own machines. Please keep in mind that all the tools needed for the class are also available on our lab machines (Stocker 107 and 307A). The labs are open all day and can be accessed [remotely](#linux-commands-and-remote-loginfile-transfer). We will also be using [Git/GitHub](#gitgithub) for source/version control. Your projects (homework assignments) will be in our GitHub [2400 classroom](https://github.com/2400-fl-19)

  **All examples discussed in class will be posted on this site.**

---

- [Installing **C/C++** compiler](#Installing-CC-compiler)
- [Compiling and running the examples in this repository](#Compiling-and-running-the-examples-in-this-repository)
  - [Generate a `Makefile` and use the `make` command](#Generate-a-Makefile-and-use-the-make-command)
  - [Running a program:**](#Running-a-program)
- [Recommended Editors](#Recommended-Editors)
- [VS Code Customization](#VS-Code-Customization)
  - [Extensions](#Extensions)
  - [Configure the compiler to run in a terminal](#Configure-the-compiler-to-run-in-a-terminal)
  - [Configure Code Runner to use `-Wall -g`](#Configure-Code-Runner-to-use--Wall--g)
  - [Configure the Debugger](#Configure-the-Debugger)
  - [Helpfull user snippets](#Helpfull-user-snippets)
- [Git/GitHub](#GitGitHub)
  - [Git Installation](#Git-Installation)
  - [Create a GitHub account](#Create-a-GitHub-account)
- [Linux Commands and Remote Login/File Transfer](#Linux-Commands-and-Remote-LoginFile-Transfer)
- [SFTP Client](#SFTP-Client)
- [Coding Style](#Coding-Style)

### Installing **C/C++** compiler

---

- `Mac`:
    Install Xcode and run it once.
- `Linux`: Should already come with GNU g++ preinstalled.

- `Windows`: [Installation instructions](docs/installing-minGW.md).

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

#### Generate a `Makefile` and use the `make` command 
Use the provided `genmake` program

```console
    ./genmake program.cc
```

>this will generate a Makefile for your program. You only need to do it once.

**To compile your program with make:**

```console
    make
```

**To clean the executables:**

```console
    make clean
```



#### Running a program:**

```console
    ./a.out (Mac/Linux)

    a.exe   (Windows)
```

### Recommended Editors

---

You need a good programming editor (**DO NOT USE WINDOWS Notepad**). I recommend either Visual Studio Code or Atom. They are both free and highly customizable. See below for other editors.

- [Visual Studio Code](https://code.visualstudio.com/), highly recommended
- [Atom Editor](https://atom.io)
- [Sublime Text](https://www.sublimetext.com) $$
- [Emacs](https://www.gnu.org/software/emacs)
- [Vim](https://www.vim.org)
- [nano](https://www.nano-editor.org/)
- and many others ....

### VS Code Customization

---

#### Extensions

- C/C++ extension from Microsoft
- Code Runner
- Trailing Semicolon (recommended)
- Code Spell Checker

#### Configure the compiler to run in a terminal

- Open `Preferences` and click on `Settings`
- Find the entry called `Run Code Configuration`
- Enable the options:
  - `Run in Terminal`
  - `Save All Files Before Run`
  - `Save File Before Run`

#### Configure Code Runner to use `-Wall -g`

- Go to the Settings menu
- Search for `Executor Map` and click on "Settings.json"
- Find `code-runner.executorMap`
- Click on the edit icon on the left. This should create and entry on the right hand side
- Modify the `cpp` option to the following:

         "cd $dir && g++ -Wall -std=c++11 -g $fileName && ./a.out"

         On Windows use "a.exe" instead of "./a.out"
        

    > `-g` option is needed to use a debugger such as `gdb` or `lldb`.

#### Configure the Debugger

the debugger depends on what executable file you set up in the previous step.

- Click on the debug icon on the left
- Click on the green arrow in the left panel, this should allow you to edit the debug options in "launch.json".

   - Change the `program` option to:

         "${workspaceFolder}/a.out"

        If you are renaming your executable file the same as the name of the program without the extension (for example test.cpp to test), then use the following value:

         "${workspaceFolder}/${fileBasenameNoExtension}"

   - Make sure you enable `externalConsole`.

        ```
        "externalConsole": true,
        ```
   - Try debugging again and it should work.

#### Helpfull user snippets
VSCode already has built-in snippets such as a *for* loop, *class*, etc. However, you can create your own. Open **User Snippets** under **Preferences**. If you are editing a C++ file then the file **cpp.json** should open automatically. Otherwise, you may have to select it. Here is a sample of snippets that I use [cpp-snippets.json](docs/cpp-snippets.json).

### Git/GitHub

---

We will be using Git/GitHub for version/source control (track changes to code). Here are some excellent tutorials that introduce the concepts and shows the most important commands you need to learn.

https://www.youtube.com/watch?v=HVsySz-h9r4 

https://www.youtube.com/watch?v=uR6G2v_WsRA

https://www.youtube.com/watch?v=MJUJ4wbFm_A

#### Git Installation

https://git-scm.com/download/

> Note: Git might already be installed on your Mac or Linux machines.

#### Create a GitHub account

Make sure you create a student account on GitHub using your school email (.edu). You will get the student pack which includes creating private repositories for free. Here is a direct link:

https://education.github.com/students

### Linux Commands and Remote Login/File Transfer

---

Here are some Linux commands and instructions to access our system remotely.

[Linux Commands and Remote Access](docs/linux.md)

### SFTP Client

---

Ocasionaly you need to transer your files from your machine to our Ubuntu system and vice versa. In order to do this you need to use an SFTP (Secure File Transfer Protocol) client. Here are few SFTP clients:

- [Cyberduck](https://cyberduck.io/)
- [FileZilla](https://filezilla-project.org/)
- [Fetch (Mac only)](https://fetchsoftworks.com/)

### Coding Style

---

It is very important to follow a good/standard coding style. Refer to this document when writing code.
[CS 2400 Coding Style](docs/coding-style.md)
