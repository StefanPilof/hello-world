#include <vector>

#ifndef MYGRAPH
#define MYGRAPH

using namespace std;

class MyGraph{
	private:
		int size=0; //adjacency matrix order
		vector<vector<int>> A;
	public:
		void findpath();
		void print();
		void manfill();
		void rndfill();
		int getsize();
		void setsize(int);
		MyGraph(int);
		~MyGraph();
		
		MyGraph& operator = (const MyGraph&) = delete;
		MyGraph(MyGraph&& moved) = delete;
		MyGraph(const MyGraph&) = delete;
};

#endif //MYGRAPH
