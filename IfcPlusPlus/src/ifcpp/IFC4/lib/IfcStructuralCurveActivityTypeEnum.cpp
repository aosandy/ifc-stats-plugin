/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcStructuralCurveActivityTypeEnum.h"

// TYPE IfcStructuralCurveActivityTypeEnum = ENUMERATION OF	(CONST	,LINEAR	,POLYGONAL	,EQUIDISTANT	,SINUS	,PARABOLA	,DISCRETE	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcStructuralCurveActivityTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcStructuralCurveActivityTypeEnum> copy_self( new IfcStructuralCurveActivityTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcStructuralCurveActivityTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCSTRUCTURALCURVEACTIVITYTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONST:	stream << ".CONST."; break;
		case ENUM_LINEAR:	stream << ".LINEAR."; break;
		case ENUM_POLYGONAL:	stream << ".POLYGONAL."; break;
		case ENUM_EQUIDISTANT:	stream << ".EQUIDISTANT."; break;
		case ENUM_SINUS:	stream << ".SINUS."; break;
		case ENUM_PARABOLA:	stream << ".PARABOLA."; break;
		case ENUM_DISCRETE:	stream << ".DISCRETE."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcStructuralCurveActivityTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONST:	return L"CONST";
		case ENUM_LINEAR:	return L"LINEAR";
		case ENUM_POLYGONAL:	return L"POLYGONAL";
		case ENUM_EQUIDISTANT:	return L"EQUIDISTANT";
		case ENUM_SINUS:	return L"SINUS";
		case ENUM_PARABOLA:	return L"PARABOLA";
		case ENUM_DISCRETE:	return L"DISCRETE";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcStructuralCurveActivityTypeEnum> IfcStructuralCurveActivityTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcStructuralCurveActivityTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcStructuralCurveActivityTypeEnum>(); }
	shared_ptr<IfcStructuralCurveActivityTypeEnum> type_object( new IfcStructuralCurveActivityTypeEnum() );
	if( std_iequal( arg, L".CONST." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_CONST;
	}
	else if( std_iequal( arg, L".LINEAR." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_LINEAR;
	}
	else if( std_iequal( arg, L".POLYGONAL." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_POLYGONAL;
	}
	else if( std_iequal( arg, L".EQUIDISTANT." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_EQUIDISTANT;
	}
	else if( std_iequal( arg, L".SINUS." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_SINUS;
	}
	else if( std_iequal( arg, L".PARABOLA." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_PARABOLA;
	}
	else if( std_iequal( arg, L".DISCRETE." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_DISCRETE;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcStructuralCurveActivityTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
