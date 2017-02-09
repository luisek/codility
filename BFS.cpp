#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Node
{
    int value;
    Node* left;
    Node* right;
};

struct bfsInfo
{
    int distance = -1;
    int predecessor = -1;
    int node = -1;
    bfsInfo() = default;
};
vector<bfsInfo> _bfsInfo{};

void doBFS(Node* n)
{
    queue<Node*> _nodeQueue{};
    int distance = 0;
    
    _nodeQueue.push(n);
    bfsInfo temp;
    temp.distance = distance;
    temp.predecessor = -1;
    temp.node = n->value;
    _bfsInfo.push_back(temp);
    auto distanceLeft = distance;
    auto distanceRight = distance;
 
    while (!_nodeQueue.empty())
    {
        Node* n = _nodeQueue.front();
        _nodeQueue.pop();
        
        if (n->left)
        {
            ++distanceLeft;
            _nodeQueue.push(n->left);
            temp.distance = distanceLeft;
            temp.predecessor = n->value;
            temp.node = n->left->value;
            _bfsInfo.push_back(temp);
        }

        if (n->right)
        {
            ++distanceRight;
            _nodeQueue.push(n->right);
            temp.distance = distanceRight;
            temp.predecessor = n->value;
            temp.node = n->right->value;
            _bfsInfo.push_back(temp);
        } 
    }
}

int main()
{
    Node* l3 = new Node{ 11, nullptr, nullptr };
    Node* l2 = new Node{ 4, nullptr, nullptr };
    Node* l1 = new Node{ 9, l3, l2 };

    Node* r3 = new Node{ 8, nullptr, nullptr };
    Node* r2 = new Node{ 2, nullptr, nullptr };
    Node* r1 = new Node{ 3, r3, r2 };

    Node* root = new Node{ 7, l1, r1 };

    doBFS(root);

    for (const auto& x : _bfsInfo)
    {
        cout <<"Node: " <<x.node << " distance: " << x.distance << " predecessor: " << x.predecessor << '\n';
    }

    return 0;
}
