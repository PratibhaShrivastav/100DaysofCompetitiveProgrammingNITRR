void mirror(Node* node) 
{
     // Your Code Here
    if(node==NULL)
        return;
    else{
        mirror(node->left);
        mirror(node->right);
        Node* temp;
        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}