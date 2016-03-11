/*
 * base.h
 *
 *  Created on: 2016年2月28日
 *      Author: will
 */

#ifndef BASE_H_
#define BASE_H_

#include <string>
#include <queue>

namespace QFlow {

class BaseData {
public:
    std::string GetTypeName() const = 0;
};

/*
 * TODO: ThreadSafe
 */
class BaseQueue {
public:
    size_t GetSize();
    bool IsEmpty();
    bool IsFull();
private:
    std::queue<BaseData*> m_buff;
};

class BaseBolt {
public:
    BaseBolt(const std::string& name = "");
    virtual ~BaseBolt();

    enum BoltStatus{
        e_status_ready,
        e_status_running,
        e_status_stop,
    };

    void GetName() const;
    bool Run();
    bool IsRunning();
    void SetStop();

private:
    bool IsMyData(const std::string& data_type) const;

private:
    std::string m_name;
    BoltStatus m_status;
    BaseQueue* m_queue_in;
    BaseQueue* m_queue_out;
};

} /* namespace QFlow */
#endif /* BASE_DATA_H_ */

