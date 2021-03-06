#ifndef HUFFMANDECOMPRESSOR_H
#define HUFFMANDECOMPRESSOR_H

#define LETTER unsigned short
#define INVALID_CHARACTER 0x40
#define NOT_LEAF_BIT 0
#define LEAF_BIT 1
#define NOT_EOF 0x80

#include <fstream>
#include <iostream>
#include <string>
#include <bitset>
#include <stdlib.h>
#include <string.h>

#include "DecompressorTreeNode.h"

using namespace std;

class HuffmanDecompressor {

    private:
        string inputFileName;
        string outputFileName;
        short letterSizeBits;
        short leftUncompressedBitsCount;
        short ignoredBitsCount;
        LETTER leftUncompressedBits;
        DecompressorTreeNode* rootTreeNode;
        bool debugMode;
        string extension;
        string password;
        int letterInPassword;
        bool usePassword;
        
        void readMetaDataFromFile(ifstream*);
        void readDictionaryFromFile(ifstream*);
        void readDictionaryNode(ifstream*, DecompressorTreeNode*, LETTER);
        void printDictionary(DecompressorTreeNode*, string);
        void readFileAndDecompress(ifstream*);
        LETTER readABitFromFile(ifstream*);
        short writeABitToFile(ofstream*, LETTER, bool);
        string makeStringFromBits(LETTER, short); 
        
    public:
        HuffmanDecompressor(string, bool, string);
        void decompress();
};

#endif
