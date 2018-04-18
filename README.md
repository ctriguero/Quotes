# Quote generator
###### There are three versions of this program. The programs output randomly a quote from a data base. The output of the quote can be just a print on the screen or even the quote can be heared through the speakers in the last to versions of the program.

## The first one:
**zen.cpp** reads at random one of the sentences stored in the file **quotes.txt** and shows it on the screen. 

## The second program:
**zen_speak.cpp** reads at random one of the sentences stored in the file **quotes.txt** and shows it on the screen but also reads and produces a voice who reads the quote.

## The third program:
**zen_speak_multi.cpp** does the same as the second but now the quotes are speak out using the voice adapted to the languaje. This advanced program has for the moment 3 quote files: **quoteEn.txt**, **quoteFr.txt**, and **quoteSp.txt** files each one in a different languaje. For the moment this includes *Spanish*, *English*, and *French*.

All quote files can be modified. We can add or remove sentence with no need to modify the program. The program will read all the files available in the quote files.

## Compilation
Assuming that we are on a **Linux** plataform, all the programs simply compile using a C++ compiler:
```
g++ zen.cpp -o zen
g++ zen_speak.cpp -o zen
g++ zen_speak_multi.cpp -o zen
```

To run the programs then you just need the following command:

`./zen`

- [x] Finish my changes
- [ ] Push my commits to GitHub
- [ ] Open a pull request
