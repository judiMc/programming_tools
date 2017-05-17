# programming_tools
This repository contains useful introductory programming material such as tools and technique specifically focusing on C language.

The material within this repository was created to support students learning and development. As such, the repositiory is open to contributions and suggestions from students. If you wish to contribute or suggest new topics please create new issues or pull requests.

## Latex

To install and get started with software required for LaTeX, please check out instructions for your specific operating system at https://www.latex-project.org/get/ 

You will need pdflatex and make to generate PDFs for the review material.

## Getting Started

### Linux

#### Compile Script
  On a Linux operating system, you can the use the ./compileScript to create a pdf file for each topic directory.
  
  This will run a script with a significant amount of output, once complete a pdf will be available in each directory.

#### Compile Single PDF
  1) Change to topic directory
    ex) cd cppcheck
  2) Compile tex file into pdf, by calling make file
    ex) make
    
  or
  
  2) If you don't have make installed use you can use pdflatex to compile
  ex) pdflatex cppcheckReview.tex

### Mac

### Windows
