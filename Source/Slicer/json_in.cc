//
// Created by warfield on 11/17/19.
//

#include <Slicer/json_in.h>
#include <iostream>
#include <jsoncpp/json/json.h>
#include <fstream>
using namespace std;

JSON_IN::JSON_IN() {


}

JSON_IN::~JSON_IN() {

}

void JSON_IN::parse_data() {
    bool alive = true;
    while (alive){
//        Json::Value root;   // will contains the root value after parsing.
        Json::Reader reader;
        std::ifstream test("data.json", std::ifstream::binary);
        bool parsingSuccessful = reader.parse( test, root, false );
        if ( !parsingSuccessful )
        {
            // report to the user the failure and their locations in the document.
            std::cout  << reader.getFormattedErrorMessages()
                       << "\n";
        }

        std::string encoding = root.get("encoding", "UTF-8" ).asString();
        std::cout << root << "\n";
        alive = false;
    }
}