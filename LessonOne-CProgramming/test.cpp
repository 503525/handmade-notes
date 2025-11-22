#include <windows.h> // Required to call windows specific functions

/**
 * Note:    The `windows.h` within the <~> braces is a FILENAME - a path can 
 *          just as easily be specified.
 *          When working with a path, use / rather than \ because / is
 *          universal, and \ is windows specific
 */

// Function Declaration
void helloWorldFunction(void);

// Function Definition
void helloWorldFunction(void)
{
    OutputDebugStringA("This is the first thing we have actually printed.\n");
}

// The starting point for the program... for now...
int CALLBACK WinMain(
    HINSTANCE hInstance,        
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    helloWorldFunction();
}

// The WinMain function as it appears in learn.microsoft.com
/*
int __clrcall WinMain(
  [in]           HINSTANCE hInstance,
  [in, optional] HINSTANCE hPrevInstance,
  [in]           LPSTR     lpCmdLine,
  [in]           int       nShowCmd
);

Notice that it is a __clrcall and not CALLBACK... will have to ask about this.

CALLBACK is syntactic sugar!
    It is a "Macro" that expands in some windows specific special declaration.
    It tells the linker that this is a special function.
hInstance is a handle that refers to our running executable.
    Sometimes you'll use it to ask things like,
    "how much memory is this running executable using?"
hPrevInstance is a legacy thing.
lpCmdLine is what got sent to us when we are run by the command line.
nShowCmd is whether the program runs in normal window, minimized, or maximized.


Note that [in] and stuff is used to produce secondary files like documentation.
These are annotations to tell you what direction the data is flowing.
Mostly for header files and stuff.
You don't wanna leave them in lol.
*/