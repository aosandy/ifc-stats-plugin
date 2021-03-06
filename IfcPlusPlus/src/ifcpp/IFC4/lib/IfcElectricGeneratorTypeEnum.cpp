/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcElectricGeneratorTypeEnum.h"

// TYPE IfcElectricGeneratorTypeEnum = ENUMERATION OF	(CHP	,ENGINEGENERATOR	,STANDALONE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcElectricGeneratorTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcElectricGeneratorTypeEnum> copy_self( new IfcElectricGeneratorTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricGeneratorTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICGENERATORTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CHP:	stream << ".CHP."; break;
		case ENUM_ENGINEGENERATOR:	stream << ".ENGINEGENERATOR."; break;
		case ENUM_STANDALONE:	stream << ".STANDALONE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricGeneratorTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CHP:	return L"CHP";
		case ENUM_ENGINEGENERATOR:	return L"ENGINEGENERATOR";
		case ENUM_STANDALONE:	return L"STANDALONE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricGeneratorTypeEnum> IfcElectricGeneratorTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricGeneratorTypeEnum>(); }
	shared_ptr<IfcElectricGeneratorTypeEnum> type_object( new IfcElectricGeneratorTypeEnum() );
	if( std_iequal( arg, L".CHP." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_CHP;
	}
	else if( std_iequal( arg, L".ENGINEGENERATOR." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_ENGINEGENERATOR;
	}
	else if( std_iequal( arg, L".STANDALONE." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_STANDALONE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricGeneratorTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
