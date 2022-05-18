#include <vector>
#include <string>

using namespace std;

namespace ariel{

    class Node{
        private:
            
        public:
            Node(Node*);
            string data;
            vector<Node*> subordinates;
            Node* superior;
    };

    class OrgChart{
    //class Node;
        private:

        public:
            //Node root;
            OrgChart();
            OrgChart& add_root(string);
            OrgChart& add_sub(string,string);
            string* begin_level_order();
            string* end_level_order();
            string* begin_reverse_order();
            string* reverse_order();
            string* begin_preorder();
            string* end_preorder();

            int* begin();
            int* end();

            friend ostream& operator<<(ostream&, const OrgChart&);

            

    };

}