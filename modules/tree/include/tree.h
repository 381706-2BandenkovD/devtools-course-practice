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
    Node* root; //const? ������ ������
    Node* AddNode (Node*, int);
    Node* DelNode (Node*, int);
    int SearchNode(Node*, int);
    void DelAll(Node*);
public:
    Tree();
    ~Tree();
    void Add(int); // �������� �������
    void Del(int); // ������ �������
    bool Search(int); // ����� ��������
    void Clear();
};
//��� ������� ������ - >=, ����� - <

#endif
