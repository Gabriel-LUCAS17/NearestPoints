#include <nearestPoints.h>

bool comp(dist &p1, dist &p2){
	return p1.distance <= p2.distance;
}

int main(int argc, char **argv){
	if(atoi(argv[1]) < atoi(argv[2])){
		std::cout << "Error : first parameter must be higher than the second" << std::endl;
		exit(1);
	}
	srand(time(0));
	std::vector<dist> distances;
	for(int i=0; i<atoi(argv[1]); i++){
		dist val;
		val.p = cv::Point2f(std::rand() % 20 - 10,std::rand() % 20 - 10);
		val.distance = norm(val.p);
		distances.push_back(val);
	}
	std::sort_heap(distances.begin(), distances.end(), comp);
	for(int i=0; i<atoi(argv[2]); i++){
		std::cout << distances[i].p.x << " " << distances[i].p.y << " " << distances[i].distance << std::endl;
	}
}
