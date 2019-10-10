#include "ServiceLocator.h"
#include <type_traits>

ServiceLocator* ServiceLocator::instance()
{
	if (m_instance == nullptr)
	{
		m_instance = new ServiceLocator();
	}
	return m_instance;
}

ServiceLocator::~ServiceLocator()
{

}

template<typename T>
void ServiceLocator::AddService(T* t_service)
{
	m_services.insert(t_service);
}

template<typename T>
void ServiceLocator::RemoveService(T* t_service)
{
	m_services.erase(t_service);
}

template<typename T>
T* ServiceLocator::GetService()
{
	if ((std::is_base_of < Service, T >) == false)
	{
		std::cout << "Type does not have Service as base" << std::endl;
		return  nullptr;
	}


	return m_services.find(T);
}

template<typename T>
T* ServiceLocator::FindService()
{
	if ((std::is_base_of < Service, T >) == false)
	{
		std::cout << "Type does not have Service as base" << std::endl;
		return  nullptr;
	}
	for (auto service : m_services)
	{
		T* cast_service = dynamic_cast<T*>(service);
		if (cast_service != nullptr) return cast_service;
	}
	return nullptr;
}
