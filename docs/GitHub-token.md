### Create a Personal Access Token
GitHub now requires that users use a Personal Access Token (PAT) to login to GitHub from a terminal (remotely). To generat a token and start using it for access, follow these instructions:

1. Make sure you configured your email and user name on your local machine. Open a terminal window and issue the following commands:
   ```console
           git config --global user.name "Enter your name here"
           git config --global user.email "Enter the email you used to sign up for GitHub  here"
   ```

2. Verify your settings by issuing the command:
   ```console
       git config -l
   ```
    > You should see your user name and email listed
> 
3. Go to `GitHub.com`
4. Click on the top-right dropdown where your portrait is
5. Click on `Settings`
6. On the left sidebar click on `Developer settings`
7. Click on `Personal access tokens`
8. Click on `Generate new token`
9. Write any personal comment in the `Note` section
10. Set the expiration to whatever you prefer so you won't be asked to enter the token every time you login
11. Check all the options you would like to control (for now you can check all options)
12. Click on `Generate token`
13. Copy the token to the clipboard
14. In the terminal, when asked for the password click `Ctrl-v` to paste the token you just copied
    > Note the password will not show anything

That's it. You will not be prompted for the password every time you access GitHub from the terminal

If you suspect that someone had access to your token, you can always delete it and generate a new one
