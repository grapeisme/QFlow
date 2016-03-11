/*
 * base_data.cpp
 *
 *  Created on: 2016年2月28日
 *      Author: will
 */

#include "base.h"

namespace QFlow {

BaseBolt::BaseBolt(const std::string& name)
    :m_name(name){
}

BaseBolt::~BaseBolt() {
}

std::string BaseBolt::GetName() const {
    return m_name;
}

bool BaseBolt::IsMyData(const std::string& data_type) const {
    return false;
}


} /* namespace QFlow */
