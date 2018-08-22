#ifndef CLONE_H
#define CLONE_H
#include "RandomListNode.h"
using namespace std;

    void CopyList(RandomListNode *pHead) {
        RandomListNode *pNode = pHead;
        while (pNode != nullptr) {
            RandomListNode *pTemp = new RandomListNode(0);
            pTemp->label = pNode->label;
            RandomListNode *pNext = pNode->next;
            pNode->next = pTemp;
            pTemp->next = pNext;
            pNode = pNext;
        }
    }
    
    void ConstructRandom(RandomListNode *pHead) {
        RandomListNode *pNode = pHead;
        while (pNode != nullptr) {
			if (pNode->random != nullptr)
            	pNode->next->random = pNode->random->next;
			else 
				pNode->next->random = nullptr;

            pNode = pNode->next->next;
        }
    }
    
    RandomListNode *SeperateList(RandomListNode *pHead) {
        RandomListNode *pHeadCopy = pHead->next;
        RandomListNode *pNode = pHead;
        RandomListNode *pNodeCopy = pHeadCopy;
        RandomListNode *pNext = nullptr;
        RandomListNode *pNextCopy = nullptr;
        while (pNode != nullptr) {
            
            if (pNodeCopy->next != nullptr) {
                pNext = pNodeCopy->next;
                pNextCopy = pNodeCopy->next->next;
            }
            else {
                pNext = nullptr;
                pNextCopy = nullptr;
            }
            
            pNode->next = pNext;
            pNodeCopy->next = pNextCopy;
            
            pNode = pNext;
            pNodeCopy = pNextCopy;
        }
        return pHeadCopy;
    }
    
    RandomListNode* Clone(RandomListNode* pHead)
    {
        if (pHead == nullptr)
            return nullptr;
        cout<<"Copy list."<<endl;
        CopyList(pHead);
		RandomListNode *pNode = pHead;
		while (pNode != nullptr) {
			pNode = pNode->next;
		}
        cout<<"Construct random."<<endl;
        ConstructRandom(pHead);
        cout<<"Seperate list."<<endl;
        return SeperateList(pHead);
    }
#endif
