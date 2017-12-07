# RRWarning_inih
## Screenshots

![alt tag](https://i.imgur.com/NHCoHTL.png) ![alt tag](https://i.imgur.com/G89ka73.png) ![alt tag](https://i.imgur.com/PdlOPVG.png)

## Description
This is a software which displays a message box to switch refresh rates based on which game is open. It's based on a previous project of mine, [GetRR](https://github.com/Wyse-/GetRR), but modified to be configurable thanks to the [inih](https://github.com/benhoyt/inih) library. As you probably guessed by the name it's configured through an ini file. Currently the message boxes are displayed by using VBScript files, and the refresh rates are applied by using batch files and the SetDisplayFrequency executable from AnyDVD: in the future I'll probably look into a better solution, but they do get the job done for now.

One may ask: why is changing refresh rate depending on the game beneficial? Well, in my case I use a 1440p overclockable Korean monitor, which displays different kind of artifacts when at high refresh rates. Depending on the game and its graphic settings/optimization framerate reached will differ: for example, why stay at 120Hz with monitor overclocking artifacts if the game you're playing only goes to 90FPS maximum? That's where this tool comes in handy.

This software will need tweaking based on your preferences and relies on external executables, make sure to check out the how-to below.

## How-to
- Head over to [releases](https://github.com/Wyse-/RRWarning_inih/releases) to download the RRWarning_inih executable and the required VBScript and batch files.
- You will need a copy of the "SetDisplayFrequency.exe" executable. This is a proprietary executable included in the [AnyDVD HD demo](https://www.redfox.bz/download.html). Obtaining it is free and you can uninstall the software after copying the executable (which is located in the install folder of the software), however I'm not allowed to redistribute the file itself.
- Download [Quiet](http://www.joeware.net/freetools/tools/quiet/index.htm). This is needed to silently start the main RRWarning_inih executable.
- [Optional] If you wish to use [Deliner](https://www.monitortests.com/forum/Thread-Deliner) you should download it as well.
- Extract and possibly place everything in the same folder.
- You might need to edit and/or add batch files for your desired refresh rates: I included the ones for 72Hz, 90Hz and 120Hz. Just open the batch files with a text editor and edit them, they're pretty straight forward.
- If you're not using Deliner delete the third line from all batch files.
- Edit the VBScript files: change the PathProgram variable to where the batch files are stored and/or the refresh rates.
- Configure the ini file, see instructions below.
- Add the start_rrwarning.bat batch file to Windows autostart.
- Done!

## Ini config
**[Games]**: this section stores the game window names from 1 to 10, and the game window class names from 11 to 15. Just to be clear: the window name is the one that is displayed when you hover over your game's icon on the Windows taskbar; the window class name is different though, to get it you will need a tool like [WinSpy](https://sourceforge.net/projects/winspyex/). The class name alternative has been included because sometimes the window name won't work: this could be caused by some kind of anticheat measures.

**[RefreshRates]**: the desired refresh rates to switch to when the game corresponding to its number is open. RRNoGame should be set to the refresh rate you want to switch to when no games are open.

**[Paths]**: those are the directories of the vbs files corresponding to the games and refreshrates of the same number. PathNoGame should be set to the path of the RRNoGame refresh rate vbs file.

## License
This software is released under [The Unlicense](https://github.com/Wyse-/RRWarning_inih/blob/master/LICENSE), however the [inih library](https://github.com/benhoyt/inih), which handles the ini file parsing, is released under a [different license](https://github.com/Wyse-/RRWarning_inih/blob/master/LICENSE_inih).
