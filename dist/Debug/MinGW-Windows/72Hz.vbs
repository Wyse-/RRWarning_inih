Option Explicit
Dim ws,Question,PathProgram
Set ws = CreateObject("wscript.shell")
'change the path of your batch file
PathProgram = "C:\UOW\SetDisplayFrequency72.bat"
Question = Msgbox("Switch to 72 Hz?", VbYesNO + VbQuestion, "Game process ended")
If Question = VbYes Then
     ws.run DblQuote(PathProgram)
End If
'***************************************
Function DblQuote(Str)
    DblQuote = Chr(34) & Str & Chr(34)
End Function
'***************************************