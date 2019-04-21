// Copyright 2019 Konnov Sergey

#ifndef MODULES_TREE_INCLUDE_TREE_H_
#define MODULES_TREE_INCLUDE_TREE_H_

class Tree
{
private:
    struct Node
    {
        int data;
        int count;
        Node* left, * right;
        Node();
    }; // ��������� ������� ������
    Node* root; // ������ ������
    Node* AddNode (Node*, int, int num = 1);
    Node* DelNode (Node*, int);
    Node* CopyNode(Node*, Node*);
    int SearchNode(Node*, int);
    void DelAll(Node*);
public:
    Tree(); // ����������� �� ���������
    Tree(const Tree&); // ����������� �����������
    bool IsEmpty() const; // ��������, ���� �� �������� � ������
    ~Tree();
    void Add(int); // �������� �������
    void Del(int); // ������ �������
    int Search(int); // ����� ��������
    Tree& operator=(const Tree&); // �������� ������������
    void Clear(); // �������� ������
};


#endif
