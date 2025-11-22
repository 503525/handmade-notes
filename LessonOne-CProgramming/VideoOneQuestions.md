1. Why did the developer in the video make a .cpp file if they are going to be programming in c?

2. How does the build process work in a modern VS Code / Terminal workflow?
    - I went to Run > Start Debugging, or equivalently, Run > Run Without Debugging, to see the debug window in the video.

3. The MSDN (now learn.microsoft.com) docs for the WinMain function gives completely different syntax.
    - What is the difference between __clrcall and CALLBACK?

4. The MSDN (now learn.microsoft.com) docs for the WinMain function gives completely different syntax from the video, which immediately broke. Instead of CALLBACK, it uses the __clrcall token, which I'm told is used in "managed code," a sort of intermediary thing that allows a single codebase to operate over multiple platforms. I understand that CALLBACK and __clrcall may have nothing to do with each other, and that managed code isn't a thing for c programs, but I'm interested if you've come across these ideas before, and how they're used in practice.