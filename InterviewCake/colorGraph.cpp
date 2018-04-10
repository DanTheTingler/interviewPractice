#include <iostream>
#include <unordered_set>
#include <vector>
#include <sstream>

using namespace std;

class GraphNode
{
   private:
       string label_;
       unordered_set<GraphNode*> neighbors_;
       string color_;

   public:
       GraphNode(const string& label) :
           label_(label),
           neighbors_(),
           color_()
       {
       }

    const string& getLabel() const
    {
        return label_;
    }

    const unordered_set<GraphNode*> getNeighbors() const
    {
        return neighbors_;
    }

    void addNeighbor(GraphNode& neighbor)
    {
        neighbors_.insert(&neighbor);
    }

    bool hasColor() const
    {
        return !color_.empty();
    }

    const string& getColor() const
    {
        if (hasColor()) {
            return color_;
        }
        else {
            throw logic_error("GraphNode is not marked with color");
        }
    }

    void setColor(const string& color)
    {
        color_ = color;
    }
};


void colorGraph(vector <GraphNode*> graph, vector <string> colors){
   for(auto node: graph){

      //This set will hold all the colors used by the graph's neighbors
      unordered_set <string> usedColors;

      //This for loop adds all the unusable colors to usedColors
      for(auto neighbor: node->getNeighbors()){
         //Make sure to check that the node doesn't contain a loop
         if(node -> getLabel() == neighbor ->getLabel()){
            ostringstream errorMessage;
            errorMessage << "Legal coloring impossible for graph with a loop: " << node->getLabel();
            throw invalid_argument(errorMessage.str());
         }

         else if(neighbor->hasColor()){
            usedColors.insert(neighbor->getColor());
         }
      }

      for(auto color: colors){
         //if the current color isn't found in the used color set
         if(usedColors.find(color) == usedColors.cend()){
            node->setColor(color);
         }

         break;
      }


   }
}

int main(){

   return 0;
}