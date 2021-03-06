/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/IFC4/include/IfcFootingTypeEnum.h"

// TYPE IfcFootingTypeEnum = ENUMERATION OF	(CAISSON_FOUNDATION	,FOOTING_BEAM	,PAD_FOOTING	,PILE_CAP	,STRIP_FOOTING	,USERDEFINED	,NOTDEFINED);
shared_ptr<BuildingObject> IfcFootingTypeEnum::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcFootingTypeEnum> copy_self( new IfcFootingTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcFootingTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCFOOTINGTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CAISSON_FOUNDATION:	stream << ".CAISSON_FOUNDATION."; break;
		case ENUM_FOOTING_BEAM:	stream << ".FOOTING_BEAM."; break;
		case ENUM_PAD_FOOTING:	stream << ".PAD_FOOTING."; break;
		case ENUM_PILE_CAP:	stream << ".PILE_CAP."; break;
		case ENUM_STRIP_FOOTING:	stream << ".STRIP_FOOTING."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcFootingTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CAISSON_FOUNDATION:	return L"CAISSON_FOUNDATION";
		case ENUM_FOOTING_BEAM:	return L"FOOTING_BEAM";
		case ENUM_PAD_FOOTING:	return L"PAD_FOOTING";
		case ENUM_PILE_CAP:	return L"PILE_CAP";
		case ENUM_STRIP_FOOTING:	return L"STRIP_FOOTING";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcFootingTypeEnum> IfcFootingTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcFootingTypeEnum>(); }
	if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcFootingTypeEnum>(); }
	shared_ptr<IfcFootingTypeEnum> type_object( new IfcFootingTypeEnum() );
	if( std_iequal( arg, L".CAISSON_FOUNDATION." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_CAISSON_FOUNDATION;
	}
	else if( std_iequal( arg, L".FOOTING_BEAM." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_FOOTING_BEAM;
	}
	else if( std_iequal( arg, L".PAD_FOOTING." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_PAD_FOOTING;
	}
	else if( std_iequal( arg, L".PILE_CAP." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_PILE_CAP;
	}
	else if( std_iequal( arg, L".STRIP_FOOTING." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_STRIP_FOOTING;
	}
	else if( std_iequal( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_USERDEFINED;
	}
	else if( std_iequal( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcFootingTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
