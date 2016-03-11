/*
 * config.h
 *
 *  Created on: 2016年2月28日
 *      Author: will
 */

#ifndef CONFIG_H_
#define CONFIG_H_

#include <string>

namespace QFlow {

class Config {
public:
    static Config* GetInstance();
    static bool Init(const std::string& file_name);

private:
    Config();

    static Config* m_instance;
};

} /* namespace QFlow */

#endif /* CONFIG_H_ */
