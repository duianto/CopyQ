// Generated by "utils/script_docs_to_cpp.py" from "docs/scripting-api.rst".
template <typename AddDocumentationCallback>
void addDocumentation(AddDocumentationCallback addDocumentation)
{

    addDocumentation("version", "String version()", "Returns version string.");
    addDocumentation("help", "String help()", "Returns help string.");
    addDocumentation("help", "String help(searchString, ...)", "Returns help for matched commands.");
    addDocumentation("show", "show()", "Shows main window.");
    addDocumentation("show", "show(tabName)", "Shows tab.");
    addDocumentation("showAt", "showAt()", "Shows main window under mouse cursor.");
    addDocumentation("showAt", "showAt(x, y, [width, height])", "Shows main window with given geometry.");
    addDocumentation("showAt", "showAt(x, y, width, height, tabName)", "Shows tab with given geometry.");
    addDocumentation("hide", "hide()", "Hides main window.");
    addDocumentation("toggle", "bool toggle()", "Shows or hides main window.");
    addDocumentation("menu", "menu()", "Opens context menu.");
    addDocumentation("menu", "menu(tabName, [maxItemCount, [x, y]])", "Shows context menu for given tab.");
    addDocumentation("exit", "exit()", "Exits server.");
    addDocumentation("disable", "disable(), enable()", "Disables or enables clipboard content storing.");
    addDocumentation("monitoring", "bool monitoring()", "Returns true only if clipboard storing is enabled.");
    addDocumentation("visible", "bool visible()", "Returns true only if main window is visible.");
    addDocumentation("focused", "bool focused()", "Returns true only if main window has focus.");
    addDocumentation("filter", "filter(filterText)", "Sets text for filtering items in main window.");
    addDocumentation("ignore", "ignore()", "Ignores current clipboard content (used for automatic commands).");
    addDocumentation("clipboard", "ByteArray clipboard([mimeType])", "Returns clipboard data for MIME type (default is text).");
    addDocumentation("selection", "ByteArray selection([mimeType])", "Same as `clipboard()` for Linux/X11 mouse selection.");
    addDocumentation("hasClipboardFormat", "bool hasClipboardFormat(mimeType)", "Returns true only if clipboard contains MIME type.");
    addDocumentation("hasSelectionFormat", "bool hasSelectionFormat(mimeType)", "Same as `hasClipboardFormat()` for Linux/X11 mouse selection.");
    addDocumentation("copy", "bool copy(text)", "Sets clipboard plain text.");
    addDocumentation("copy", "bool copy(mimeType, data, [mimeType, data]...)", "Sets clipboard data.");
    addDocumentation("copy", "bool copy()", "Sends `Ctrl+C` to current window.");
    addDocumentation("copySelection", "ByteArray copySelection(...)", "Same as `copy(...)` for Linux/X11 mouse selection.");
    addDocumentation("paste", "paste()", "Pastes current clipboard.");
    addDocumentation("tab", "Array tab()", "Returns array of with tab names.");
    addDocumentation("tab", "tab(tabName)", "Sets current tab for the script.");
    addDocumentation("removeTab", "removeTab(tabName)", "Removes tab.");
    addDocumentation("renameTab", "renameTab(tabName, newTabName)", "Renames tab.");
    addDocumentation("tabIcon", "String tabIcon(tabName)", "Returns path to icon for tab.");
    addDocumentation("tabIcon", "tabIcon(tabName, iconPath)", "Sets icon for tab.");
    addDocumentation("count", "count(), length(), size()", "Returns amount of items in current tab.");
    addDocumentation("select", "select(row)", "Copies item in the row to clipboard.");
    addDocumentation("next", "next()", "Copies next item from current tab to clipboard.");
    addDocumentation("previous", "previous()", "Copies previous item from current tab to clipboard.");
    addDocumentation("add", "add(text, ...)", "Adds new text items to current tab.");
    addDocumentation("insert", "insert(row, text)", "Inserts new text items to current tab.");
    addDocumentation("remove", "remove(row, ...)", "Removes items in current tab.");
    addDocumentation("edit", "edit([row|text] ...)", "Edits items in current tab.");
    addDocumentation("read", "ByteArray read([mimeType]);", "Same as `clipboard()`.");
    addDocumentation("read", "ByteArray read(mimeType, row, ...);", "Returns concatenated data from items or clipboard if row is negative.");
    addDocumentation("write", "write(row, mimeType, data, [mimeType, data]...)", "Inserts new item to current tab.");
    addDocumentation("change", "change(row, mimeType, data, [mimeType, data]...)", "Changes data in item in current tab.");
    addDocumentation("separator", "String separator()", "Returns item separator (used when concatenating item data).");
    addDocumentation("separator", "separator(separator)", "Sets item separator for concatenating item data.");
    addDocumentation("action", "action()", "Opens action dialog.");
    addDocumentation("action", "action(row, ..., command, outputItemSeparator)", "Runs command for items in current tab.");
    addDocumentation("popup", "popup(title, message, [time=8000])", "Shows popup message for given time in milliseconds.");
    addDocumentation("notification", "notification(...)", "Shows popup message with icon and buttons.");
    addDocumentation("exportTab", "exportTab(fileName)", "Exports current tab into file.");
    addDocumentation("importTab", "importTab(fileName)", "Imports items from file to a new tab.");
    addDocumentation("config", "String config()", "Returns help with list of available options.");
    addDocumentation("config", "String config(optionName)", "Returns value of given option.");
    addDocumentation("config", "String config(optionName, value)", "Sets option and returns new value.");
    addDocumentation("config", "String config(optionName, value, ...)", "Sets multiple options and return list with values in format `optionName=newValue`.");
    addDocumentation("info", "String info([pathName])", "Returns paths and flags used by the application.");
    addDocumentation("eval", "Value eval(script)", "Evaluates script and returns result.");
    addDocumentation("source", "Value source(fileName)", "Evaluates script file and returns result of last expression in the script.");
    addDocumentation("currentPath", "String currentPath([path])", "Get or set current path.");
    addDocumentation("str", "String str(value)", "Converts a value to string.");
    addDocumentation("input", "ByteArray input()", "Returns standard input passed to the script.");
    addDocumentation("toUnicode", "String toUnicode(ByteArray, encodingName)", "Returns string for bytes with given encoding.");
    addDocumentation("toUnicode", "String toUnicode(ByteArray)", "Returns string for bytes with encoding detected by checking Byte Order Mark (BOM).");
    addDocumentation("fromUnicode", "ByteArray fromUnicode(String, encodingName)", "Returns encoded text.");
    addDocumentation("data", "ByteArray data(mimeType)", "Returns data for automatic commands or selected items.");
    addDocumentation("setData", "ByteArray setData(mimeType, data)", "Modifies data for `data()` and new clipboard item.");
    addDocumentation("removeData", "ByteArray removeData(mimeType)", "Removes data for `data()` and new clipboard item.");
    addDocumentation("dataFormats", "Array dataFormats()", "Returns formats available for `data()`.");
    addDocumentation("print", "print(value)", "Prints value to standard output.");
    addDocumentation("abort", "abort()", "Aborts script evaluation.");
    addDocumentation("fail", "fail()", "Aborts script evaluation with nonzero exit code.");
    addDocumentation("setCurrentTab", "setCurrentTab(tabName)", "Focus tab without showing main window.");
    addDocumentation("selectItems", "selectItems(row, ...)", "Selects items in current tab.");
    addDocumentation("selectedTab", "String selectedTab()", "Returns tab that was selected when script was executed.");
    addDocumentation("selectedItems", "[row, ...] selectedItems()", "Returns selected rows in current tab.");
    addDocumentation("selectedItemData", "Item selectedItemData(index)", "Returns data for given selected item.");
    addDocumentation("setSelectedItemData", "bool setSelectedItemData(index, Item)", "Set data for given selected item.");
    addDocumentation("selectedItemsData", "Item[] selectedItemsData()", "Returns data for all selected item.");
    addDocumentation("setSelectedItemsData", "void setSelectedItemsData(Item[])", "Set data to all selected items.");
    addDocumentation("currentItem", "int currentItem(), int index()", "Returns current row in current tab.");
    addDocumentation("escapeHtml", "String escapeHtml(text)", "Returns text with special HTML characters escaped.");
    addDocumentation("unpack", "Item unpack(data)", "Returns deserialized object from serialized items.");
    addDocumentation("pack", "ByteArray pack(item)", "Returns serialized item.");
    addDocumentation("getItem", "Item getItem(row)", "Returns an item in current tab.");
    addDocumentation("setItem", "setItem(row, item)", "Inserts item to current tab.");
    addDocumentation("toBase64", "String toBase64(data)", "Returns base64-encoded data.");
    addDocumentation("fromBase64", "ByteArray fromBase64(base64String)", "Returns base64-decoded data.");
    addDocumentation("open", "bool open(url, ...)", "Tries to open URLs in appropriate applications.");
    addDocumentation("execute", "FinishedCommand execute(argument, ..., null, stdinData, ...)", "Executes a command.");
    addDocumentation("currentWindowTitle", "String currentWindowTitle()", "Returns window title of currently focused window.");
    addDocumentation("dialog", "Value dialog(...)", "Shows messages or asks user for input.");
    addDocumentation("settings", "Array settings()", "Returns array with names of all custom options.");
    addDocumentation("settings", "Value settings(optionName)", "Returns value for an option.");
    addDocumentation("settings", "settings(optionName)", "Sets value for a new option or overrides existing option.");
    addDocumentation("dateString", "String dateString(format)", "Returns text representation of current date and time.");
    addDocumentation("commands", "Command[] commands()", "Return list of all commands.");
    addDocumentation("setCommands", "setCommands(Command[])", "Clear previous commands and set new ones.");
    addDocumentation("importCommands", "Command[] importCommands(String)", "Return list of commands from exported commands text.");
    addDocumentation("exportCommands", "String exportCommands(Command[])", "Return exported command text.");
    addDocumentation("networkGet", "NetworkReply networkGet(url)", "Sends HTTP GET request.");
    addDocumentation("networkPost", "NetworkReply networkPost(url, postData)", "Sends HTTP POST request.");
    addDocumentation("env", "ByteArray env(name)", "Returns value of environment variable with given name.");
    addDocumentation("setEnv", "bool setEnv(name, value)", "Sets environment variable with given name to given value.");
    addDocumentation("sleep", "sleep(time)", "Wait for given time in milliseconds.");
    addDocumentation("screenshot", "ByteArray screenshot(format='png', [screenName])", "Returns image data with screenshot.");
    addDocumentation("screenshotSelect", "ByteArray screenshotSelect(format='png', [screenName])", "Same as `screenshot()` but allows to select an area on screen.");
    addDocumentation("queryKeyboardModifiers", "String[] queryKeyboardModifiers()", "Returns list of currently pressed keyboard modifiers which can be 'Ctrl', 'Shift', 'Alt', 'Meta'.");
    addDocumentation("ByteArray", "ByteArray", "Wrapper for QByteArray Qt class.");
    addDocumentation("File", "File", "Wrapper for QFile Qt class.");
    addDocumentation("Dir", "Dir", "Wrapper for QDir Qt class.");
    addDocumentation("TemporaryFile", "TemporaryFile", "Wrapper for QTemporaryFile Qt class.");
    addDocumentation("arguments", "(Array)", "Array for accessing arguments passed to current function or the script");
    addDocumentation("mimeText", "(text/plain)", "Data contains plain text content.");
    addDocumentation("mimeHtml", "(text/html)", "Data contains HTML content.");
    addDocumentation("mimeUriList", "(text/uri-list)", "Data contains list of links to files, web pages etc.");
    addDocumentation("mimeWindowTitle", "(application/x-copyq-owner-window-title)", "Current window title for copied clipboard.");
    addDocumentation("mimeItems", "(application/x-copyq-item)", "Serialized items.");
    addDocumentation("mimeItemNotes", "(application/x-copyq-item-notes)", "Data contains notes for item.");
    addDocumentation("mimeOwner", "(application/x-copyq-owner)", "If available, the clipboard was set from CopyQ (from script or copied items).");
    addDocumentation("mimeClipboardMode", "(application/x-copyq-clipboard-mode)", "Contains `selection` if data is from X11 mouse selection.");
    addDocumentation("mimeCurrentTab", "(application/x-copyq-current-tab)", "Current tab name when invoking command from main window.");
    addDocumentation("mimeSelectedItems", "(application/x-copyq-selected-items)", "Selected items when invoking command from main window.");
    addDocumentation("mimeCurrentItem", "(application/x-copyq-current-item)", "Current item when invoking command from main window.");
    addDocumentation("mimeHidden", "(application/x-copyq-hidden)", "If set to `1`, the clipboard or item content will be hidden in GUI.");
    addDocumentation("mimeShortcut", "(application/x-copyq-shortcut)", "Application or global shortcut which activated the command.");
    addDocumentation("mimeColor", "(application/x-copyq-color)", "Item color (same as the one used by themes).");
    addDocumentation("mimeOutputTab", "(application/x-copyq-output-tab)", "Name of the tab where to store new item.");
    addDocumentation("mimeSyncToClipboard", "(application/x-copyq-sync-to-selection)", "If exists the X11 selection data will be copied to clipboard.");
    addDocumentation("mimeSyncToSelection", "(application/x-copyq-sync-to-clipboard)", "If exists the clipboard data will be copied to X11 selection.");
}
