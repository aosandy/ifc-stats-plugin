/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNamedUnit.h"
#include "ifcpp/IFC4/include/IfcPhysicalComplexQuantity.h"
#include "ifcpp/IFC4/include/IfcPhysicalSimpleQuantity.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPhysicalSimpleQuantity 
IfcPhysicalSimpleQuantity::IfcPhysicalSimpleQuantity( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPhysicalSimpleQuantity::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPhysicalSimpleQuantity> copy_self( new IfcPhysicalSimpleQuantity() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcNamedUnit>( m_Unit->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPhysicalSimpleQuantity::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPHYSICALSIMPLEQUANTITY" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { stream << "#" << m_Unit->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcPhysicalSimpleQuantity::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPhysicalSimpleQuantity::toString() const { return L"IfcPhysicalSimpleQuantity"; }
void IfcPhysicalSimpleQuantity::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPhysicalSimpleQuantity, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Unit, map );
}
void IfcPhysicalSimpleQuantity::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcPhysicalQuantity::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "Unit", m_Unit ) );
}
void IfcPhysicalSimpleQuantity::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcPhysicalQuantity::getAttributesInverse( vec_attributes_inverse );
}
void IfcPhysicalSimpleQuantity::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcPhysicalQuantity::setInverseCounterparts( ptr_self_entity );
}
void IfcPhysicalSimpleQuantity::unlinkFromInverseCounterparts()
{
	IfcPhysicalQuantity::unlinkFromInverseCounterparts();
}
