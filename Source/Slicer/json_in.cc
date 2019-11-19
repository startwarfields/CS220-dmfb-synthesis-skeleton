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
    //Refactor Soon
    bool keepGoing = true;
    while (keepGoing){
        Json::Reader reader;
        std::ifstream data("data.json", std::ifstream::binary);
        bool parsingSuccessful = reader.parse( data, root, false );
        if (!parsingSuccessful)
        {
            std::cout  << reader.getFormattedErrorMessages() << "\n";
        }

        std::string encoding = root.get("encoding", "UTF-8" ).asString();


        keepGoing = false;
    }
}