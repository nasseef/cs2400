
### VS Code Editing hints

#### Navigating functions

- Hover over a function name to see it's prototype
- While holding the (`Cmd/Ctrl`) key, hover over the function name to see its code. If the function is using `Doxygen` documentation, you should also see the description of the function
- `Cmd/Ctrl click` on the function name (call) to go to its definition
- `Cmd/Ctrl click` on the function name in the prototype you can switch to the definition and vice versa.

#### Navigating to the previous cursor position

- Click `Cmd/Ctrl U`


#### Formatting the file/selection

- To format a selection use the command `Cmd/Ctrl K` followed by `Cmd/Ctrl F`
- To format the entire file use the command `Shif-Alt F`

#### Copying/Moving line(s) of code

- To copy a line, place the cursor on the line and issue the command `Shift-Alt up/down arrow`. The command can also be used on multiple highlighted lines.
- To move a line, place the cursor on the line (or highlight multiple lines) and issue the command `Alt up/down arrow`.

#### Multi-cursor

Used when editing editing the same thing in multiple .

- Hold down the `Alt` key and click on each of the locations. Now you should see multiple cursors and be able to change all of the text at the same time.
- Keyboard shortcuts
  - Place the cursor on the first word and click `Cmd/Ctrl D`. This should highlight all the words. If you want to highlight one at a time, click `Cmd/Ctrl D` multiple times.
  - Click `Cmd/Ctrl Shift L` to place cursors on all the occurrences.
- To replace multiple words
  - Highlight the word you want to replace. Click `Cmd/Ctrl D`
  - Click `Cmd/Ctrl F2` and type the replacement.

#### Selecting a Rectangle of Text

- Click on the begining of the text.
- Hold down `Shift Alt` and drag to the opposit corner.
  