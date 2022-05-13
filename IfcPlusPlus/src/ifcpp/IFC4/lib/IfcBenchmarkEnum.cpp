/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcBenchmarkEnum.h"

// TYPE IfcBenchmarkEnum = ENUMERATION OF	(GREATERTHAN	,GREATERTHANOREQUALTO	,LESSTHAN	,LESSTHANOREQUALTO	,EQUALTO	,NOTEQUALTO	,INCLUDES	,NOTINCLUDES	,INCLUDEDIN	,NOTINCLUDEDIN);
shared_ptr<BuildingObject> IfcBenchmarkEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBenchmarkEnum> copy_self( new IfcBenchmarkEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcBenchmarkEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBENCHMARKENUM("; }
	switch( m_enum )
	{
		case ENUM_GREATERTHAN:	stream << ".GREATERTHAN."; break;
		case ENUM_GREATERTHANOREQUALTO:	stream << ".GREATERTHANOREQUALTO."; break;
		case ENUM_LESSTHAN:	stream << ".LESSTHAN."; break;
		case ENUM_LESSTHANOREQUALTO:	stream << ".LESSTHANOREQUALTO."; break;
		case ENUM_EQUALTO:	stream << ".EQUALTO."; break;
		case ENUM_NOTEQUALTO:	stream << ".NOTEQUALTO."; break;
		case ENUM_INCLUDES:	stream << ".INCLUDES."; break;
		case ENUM_NOTINCLUDES:	stream << ".NOTINCLUDES."; break;
		case ENUM_INCLUDEDIN:	stream << ".INCLUDEDIN."; break;
		case ENUM_NOTINCLUDEDIN:	stream << ".NOTINCLUDEDIN."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBenchmarkEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_GREATERTHAN:	return L"GREATERTHAN";
		case ENUM_GREATERTHANOREQUALTO:	return L"GREATERTHANOREQUALTO";
		case ENUM_LESSTHAN:	return L"LESSTHAN";
		case ENUM_LESSTHANOREQUALTO:	return L"LESSTHANOREQUALTO";
		case ENUM_EQUALTO:	return L"EQUALTO";
		case ENUM_NOTEQUALTO:	return L"NOTEQUALTO";
		case ENUM_INCLUDES:	return L"INCLUDES";
		case ENUM_NOTINCLUDES:	return L"NOTINCLUDES";
		case ENUM_INCLUDEDIN:	return L"INCLUDEDIN";
		case ENUM_NOTINCLUDEDIN:	return L"NOTINCLUDEDIN";
	}
	return L"";
}
shared_ptr<IfcBenchmarkEnum> IfcBenchmarkEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBenchmarkEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBenchmarkEnum>(); }
	shared_ptr<IfcBenchmarkEnum> type_object( new IfcBenchmarkEnum() );
	if( std_iequal( arg, L".GREATERTHAN." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_GREATERTHAN;
	}
	else if( std_iequal( arg, L".GREATERTHANOREQUALTO." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_GREATERTHANOREQUALTO;
	}
	else if( std_iequal( arg, L".LESSTHAN." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_LESSTHAN;
	}
	else if( std_iequal( arg, L".LESSTHANOREQUALTO." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_LESSTHANOREQUALTO;
	}
	else if( std_iequal( arg, L".EQUALTO." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_EQUALTO;
	}
	else if( std_iequal( arg, L".NOTEQUALTO." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_NOTEQUALTO;
	}
	else if( std_iequal( arg, L".INCLUDES." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_INCLUDES;
	}
	else if( std_iequal( arg, L".NOTINCLUDES." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_NOTINCLUDES;
	}
	else if( std_iequal( arg, L".INCLUDEDIN." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_INCLUDEDIN;
	}
	else if( std_iequal( arg, L".NOTINCLUDEDIN." ) )
	{
		type_object->m_enum = IfcBenchmarkEnum::ENUM_NOTINCLUDEDIN;
	}
	return type_object;
}