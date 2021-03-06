#include "DecompressorTreeNode.h"

DecompressorTreeNode::DecompressorTreeNode(){
    this->nodeOne = NULL;
    this->nodeTwo = NULL;
    this->letter = 0;
}

void DecompressorTreeNode::setLetter(LETTER letter) {
    this->letter = letter;
}

LETTER DecompressorTreeNode::getLetter() {
    return letter;
}

void DecompressorTreeNode::setNodeOne(DecompressorTreeNode* nodeOne) {
    this->nodeOne = nodeOne;
}

DecompressorTreeNode* DecompressorTreeNode::getNodeOne() {
    return nodeOne;
}

void DecompressorTreeNode::setNodeTwo(DecompressorTreeNode* nodeTwo) {
    this->nodeTwo = nodeTwo;
}

DecompressorTreeNode* DecompressorTreeNode::getNodeTwo() {
    return nodeTwo;
}

bool DecompressorTreeNode::isLeaf() {
    return nodeOne == NULL && nodeTwo == NULL;
}