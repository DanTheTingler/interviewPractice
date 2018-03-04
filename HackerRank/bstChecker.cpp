/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

bool checkBST(Node* root) {
   static Node* prev = NULL;
   
   if(root != NULL)
   {
     //left subtree  
     if(!checkBST(root->left)) return false;
    
     //check root & previous value
     if(prev != NULL && root->data <= prev->data) return false;
         
         
     //set previous value/check right subtree
       
     prev = root;
       
     return checkBST(root->right);  
   }
    
   return true; //if we've gone through the whole tree, then root-> right will be null, so we finally return true
}
