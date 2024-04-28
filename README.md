# failure-demo
Warehouse repository of the demonstration of failures. 

# LaTeX-Workshop IntelliSense failure 
The LaTeX-Workshop fails to provide the correct input completion for the \ref command, when using \include command. 

# Environment
- Ubuntu 22.04 (WSL)
- VS Code 1.88.1
- LaTeX-Workshop 9.20.0

# Screenshot

In the following screen capture, the input completion for \ref command is not working correctly. The fox.tex is included by \include command, in the demo.tex. 
![](img/include.png)

In the following screen capture, the input completion for \ref command is working well. The fox.tex is included by \input command, in the demo.tex. 
![](img/input.png)
