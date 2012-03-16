/*
 * ConcurrentQueueAdaptor.hpp
 *
 *  Created on: 16 mars 2012
 *      Author: Guillaume Chatelet
 */

#ifndef CONCURRENTQUEUEADAPTOR_HPP_
#define CONCURRENTQUEUEADAPTOR_HPP_

#include <concurrent/ConcurrentQueue.hpp>

namespace concurrent {

template<typename Queue>
struct QueueAdapter {
    typedef typename Queue::value_type value_type;
    typedef typename Queue::const_reference const_reference;
    QueueAdapter(Queue& q) :
            m_Queue(q) {
    }
    void push_back(const_reference & t) {
        m_Queue.push(t);
    }
private:
    Queue& m_Queue;
};

}  // namespace concurrent


#endif /* CONCURRENTQUEUEADAPTOR_HPP_ */
