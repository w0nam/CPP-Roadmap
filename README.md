# MY C++ ROADMAP!
***learning C & C++ for fun (i am a masochist.)*** Plus trying out to code using Neovim/Vim VSCode extension.

Follow my struggle trying to learn a very complex, low-level programming language AND a complex text editor / IDE, AT THE SAME TIME! 😎
Mainly got the neovim basics pretty fast. tutor is our god. Key repetitions suck ass on windows though, might have to fix this fast.

# GOALS:
1. Code myself a Web Browser (Chromium-based or nah.)
2. Code myself a Video Game (2D and/or/maybe 3D.)
3. (list will go on & on...)

# EXPERIENCE:
Completly new to programming. Never code anything. I'll start by learning C, then C++n as i was told it's the best way to learn C++, by having some C basic understanding.

Followed a guide on YouTube, cool French dude giving me advices: Nice. C is *really* hard. like, proper low-level hard. a 'Hello World !' print look something like this:

    '''
    #include <stdio.h> //Header requiered for basics input & output.

    int main() {                          //'integer' function called 'main', will return 0 if no issues are detected.
        printf("Hello world !\n")         //'Printf' to print. "Hello World !" string to print. "\n" return line character.
        return 0;                         // The main function will return 0 if no issues are detected. return 1 if functin fail.
    }
    '''

C is a library based low-level language that is around since the 70's. There is a lot of support, guide & a big community behind it. Since C is so fast and low-level, it is mainly used for OS programming. (i.e The linux kernel, MacOS kernel & Windows Kernel.) You can actually code apps using C, but since it is a fixed, function based language, you'll lack the flexibility that offer C++.

C++ Is a paradigm, low-level, library based, object oriented language. Wich means that it offers low-level hardware control, with the flexibilty of High-level language synthax & you can switch between Object Oriented Programming (OOP) & a Functional Programming (FP) workflow.

I might only learn C++ to not get lost between the 2 synthax. I'll just learn the basic of C then full focus on C++, i think this is the way to go.

Just learned that C & C++ uses a base 'int main' function EVERYTIME. You HAVE to write this function down for the program you code to work. the more complex your program get, the more functions you add that are interpreted by this function.

---

## 'Hello World !' in C++ would be:

    '''
    #include <iostream>

    int main() {
        //using namespace std;                            //Only if you don't wanna write down 'std::' at every args.
        std::cout << "Hello World !" << std::endl;        //std::character_out, then '<<' like 'this, output that'. "Hello World!", duh. std::endl for end_line.
        return 0                                          //end line is slower than "\n" because it flushes memory buffer while returning the line. no impact on a 'Hello Wolrd!' script tho.
        }                                                 //return 0 cause all function using an integer should return a value.
    '''

---

# ENVIRONEMENTS

## DESKTOP: 
    CPU: AMD Ryzen 7 7700x
    RAM: 32Gb DDR5 6000MT/s 
    GPU: NVIDIA RTX3070 8Gb
    OS: Windows 11 + MSYS2 Compiler
    Dumped VSCode to Zed in order to challenge myself even more.

## LAPTOP:
    CPU: Intel I5-10500h
    RAM: 8Gb DDR4 2444Mhz
    GPU: NVIDIA GTX1650 4Gb
    OS: Windows 11 + MSYS2 compiler
    Dev. Env.: Zed + g++
---

# SUPPORT:
Mainly using a book that i bought a week ago "C++, introduction." Pretty cool since it is a french written book. (i'm french). Sometimes learning a pretty difficult hobbie in english can be a lil' challenging. 
Sometimes i like to hop on OpenClassroom or Codecademy and complete a course. i am taking my time.
