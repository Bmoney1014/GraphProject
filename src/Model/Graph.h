/*
 * Graph.h
 *
 *  Created on: May 3, 2016
 *      Author: bhos1889
 */

#ifndef GRAPH_H_
#define GRAPH_H_

template <class Type>
class Graph : public Graph<Type>
{
private:
    int addEdge();
    int removeEdge();
    int addVertex();
    int size();
    int isEdge();
    int neighbors();
public:
    Graph();
};



#endif /* GRAPH_H_ */
