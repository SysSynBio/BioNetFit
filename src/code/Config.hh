/*
 * Config.hh
 *
 *  Created on: Jul 17, 2015
 *      Author: brandon
 */

#ifndef CONFIG_HH_
#define CONFIG_HH_

#include "Parser.hh"
#include "Utils.hh"
#include "Data.hh"
#include "Swarm.hh"
#include "Model.hh"

class Swarm;

class Config {
public:
	Config(std::string configFile);

	std::string getLocation();
	int makeCopy(std::string newLocation);
	Swarm * createSwarmFromConfig();

private:
	friend class boost::serialization::access;

	void checkConsistency();

	Swarm * swarm_;
	std::string configPath_;

	/*
	template<typename Archive>
	void serialize(Archive& ar, const unsigned version) {
		ar & configPath_;
	}
	*/
};

#endif /* CONFIG_HH_ */
