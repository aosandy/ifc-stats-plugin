/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurrencyRelationship.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLibraryInformation.h"
#include "ifcpp/IFC4/include/IfcMonetaryUnit.h"
#include "ifcpp/IFC4/include/IfcPositiveRatioMeasure.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcCurrencyRelationship 
IfcCurrencyRelationship::IfcCurrencyRelationship( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCurrencyRelationship::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCurrencyRelationship> copy_self( new IfcCurrencyRelationship() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_RelatingMonetaryUnit ) { copy_self->m_RelatingMonetaryUnit = dynamic_pointer_cast<IfcMonetaryUnit>( m_RelatingMonetaryUnit->getDeepCopy(options) ); }
	if( m_RelatedMonetaryUnit ) { copy_self->m_RelatedMonetaryUnit = dynamic_pointer_cast<IfcMonetaryUnit>( m_RelatedMonetaryUnit->getDeepCopy(options) ); }
	if( m_ExchangeRate ) { copy_self->m_ExchangeRate = dynamic_pointer_cast<IfcPositiveRatioMeasure>( m_ExchangeRate->getDeepCopy(options) ); }
	if( m_RateDateTime ) { copy_self->m_RateDateTime = dynamic_pointer_cast<IfcDateTime>( m_RateDateTime->getDeepCopy(options) ); }
	if( m_RateSource ) { copy_self->m_RateSource = dynamic_pointer_cast<IfcLibraryInformation>( m_RateSource->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCurrencyRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCURRENCYRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RelatingMonetaryUnit ) { stream << "#" << m_RelatingMonetaryUnit->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_RelatedMonetaryUnit ) { stream << "#" << m_RelatedMonetaryUnit->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_ExchangeRate ) { m_ExchangeRate->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RateDateTime ) { m_RateDateTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_RateSource ) { stream << "#" << m_RateSource->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcCurrencyRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCurrencyRelationship::toString() const { return L"IfcCurrencyRelationship"; }
void IfcCurrencyRelationship::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCurrencyRelationship, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_RelatingMonetaryUnit, map );
	readEntityReference( args[3], m_RelatedMonetaryUnit, map );
	m_ExchangeRate = IfcPositiveRatioMeasure::createObjectFromSTEP( args[4], map );
	m_RateDateTime = IfcDateTime::createObjectFromSTEP( args[5], map );
	readEntityReference( args[6], m_RateSource, map );
}
void IfcCurrencyRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcResourceLevelRelationship::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "RelatingMonetaryUnit", m_RelatingMonetaryUnit ) );
	vec_attributes.emplace_back( std::make_pair( "RelatedMonetaryUnit", m_RelatedMonetaryUnit ) );
	vec_attributes.emplace_back( std::make_pair( "ExchangeRate", m_ExchangeRate ) );
	vec_attributes.emplace_back( std::make_pair( "RateDateTime", m_RateDateTime ) );
	vec_attributes.emplace_back( std::make_pair( "RateSource", m_RateSource ) );
}
void IfcCurrencyRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcCurrencyRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
}
void IfcCurrencyRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
}
