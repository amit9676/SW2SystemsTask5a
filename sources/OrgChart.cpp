#include "OrgChart.hpp"
using namespace std;

namespace ariel{

    OrgChart::OrgChart(){
        //this->root = NULL;
    }

    OrgChart& OrgChart::add_root(string r){
        return *this;

    }

    OrgChart& OrgChart::add_sub(string a, string b){
        return *this;
    }

    string* OrgChart::begin_level_order(){
        return NULL;
    }

    string* OrgChart::end_level_order(){
        return NULL;
    }
    string* OrgChart::begin_reverse_order(){
        return NULL;
    }
    string* OrgChart::reverse_order(){
        return NULL;
    }
    string* OrgChart::begin_preorder(){
        return NULL;
    }
    string* OrgChart::end_preorder(){
        return NULL;
    }

    int* OrgChart::begin(){
        return NULL;
    }

    int* OrgChart::end(){
        return NULL;
    }

    ostream& operator<<(ostream& COUT, const OrgChart& org){
        return COUT;
    }

    Node::Node(Node* s){
        data = "";
        subordinates = {};
        superior = s;
    }
}