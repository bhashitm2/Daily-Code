Node* solve(Node* node, unordered_map<int, Node*>& vis) {
        if (vis.count(node->val)) return vis[node->val];
        
        Node* newNode = new Node(node->val);
        vis[node->val] = newNode;
        
        for (Node* nbr: node->neighbors)
            newNode->neighbors.push_back( solve(nbr, vis) );
        
        return newNode;
    }
    Node* cloneGraph(Node* node) {
        unordered_map<int, Node*> vis;
        return solve(node, vis);
    }
