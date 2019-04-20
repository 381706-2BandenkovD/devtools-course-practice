// Copyright 2019 Konnov Sergey

#ifndef MODULES_TREE_INCLUDE_TREE_H_
#define MODULES_TREE_INCLUDE_TREE_H_

class tree
{
private:
    struct Node
    {
        int data;
        Node* left, * right;
    }; // ��������� ������� ������
    Node* root; //const? ������ ������
    Node* AddNode (Node*, int);
    Node* DelNode (Node*, int);
    int SearchNode(Node*, int);
public:
    tree();
    ~tree();
    void Add(int data); // �������� �������
    void Del(int data); // ������ �������
    int Search(int data); // ����� ��������
};
//��� ������� ������ - >=, ����� - <

#endif
