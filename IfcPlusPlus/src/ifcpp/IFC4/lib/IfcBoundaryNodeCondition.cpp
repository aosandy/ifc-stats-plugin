/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoundaryNodeCondition.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcTranslationalStiffnessSelect.h"

// ENTITY IfcBoundaryNodeCondition 
IfcBoundaryNodeCondition::IfcBoundaryNodeCondition( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcBoundaryNodeCondition::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBoundaryNodeCondition> copy_self( new IfcBoundaryNodeCondition() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_TranslationalStiffnessX ) { copy_self->m_TranslationalStiffnessX = dynamic_pointer_cast<IfcTranslationalStiffnessSelect>( m_TranslationalStiffnessX->getDeepCopy(options) ); }
	if( m_TranslationalStiffnessY ) { copy_self->m_TranslationalStiffnessY = dynamic_pointer_cast<IfcTranslationalStiffnessSelect>( m_TranslationalStiffnessY->getDeepCopy(options) ); }
	if( m_TranslationalStiffnessZ ) { copy_self->m_TranslationalStiffnessZ = dynamic_pointer_cast<IfcTranslationalStiffnessSelect>( m_TranslationalStiffnessZ->getDeepCopy(options) ); }
	if( m_RotationalStiffnessX ) { copy_self->m_RotationalStiffnessX = dynamic_pointer_cast<IfcRotationalStiffnessSelect>( m_RotationalStiffnessX->getDeepCopy(options) ); }
	if( m_RotationalStiffnessY ) { copy_self->m_RotationalStiffnessY = dynamic_pointer_cast<IfcRotationalStiffnessSelect>( m_RotationalStiffnessY->getDeepCopy(options) ); }
	if( m_RotationalStiffnessZ ) { copy_self->m_RotationalStiffnessZ = dynamic_pointer_cast<IfcRotationalStiffnessSelect>( m_RotationalStiffnessZ->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBoundaryNodeCondition::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBOUNDARYNODECONDITION" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TranslationalStiffnessX ) { m_TranslationalStiffnessX->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessY ) { m_TranslationalStiffnessY->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_TranslationalStiffnessZ ) { m_TranslationalStiffnessZ->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessX ) { m_RotationalStiffnessX->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessY ) { m_RotationalStiffnessY->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_RotationalStiffnessZ ) { m_RotationalStiffnessZ->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcBoundaryNodeCondition::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBoundaryNodeCondition::toString() const { return L"IfcBoundaryNodeCondition"; }
void IfcBoundaryNodeCondition::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBoundaryNodeCondition, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_TranslationalStiffnessX = IfcTranslationalStiffnessSelect::createObjectFromSTEP( args[1], map );
	m_TranslationalStiffnessY = IfcTranslationalStiffnessSelect::createObjectFromSTEP( args[2], map );
	m_TranslationalStiffnessZ = IfcTranslationalStiffnessSelect::createObjectFromSTEP( args[3], map );
	m_RotationalStiffnessX = IfcRotationalStiffnessSelect::createObjectFromSTEP( args[4], map );
	m_RotationalStiffnessY = IfcRotationalStiffnessSelect::createObjectFromSTEP( args[5], map );
	m_RotationalStiffnessZ = IfcRotationalStiffnessSelect::createObjectFromSTEP( args[6], map );
}
void IfcBoundaryNodeCondition::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBoundaryCondition::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessX", m_TranslationalStiffnessX ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessY", m_TranslationalStiffnessY ) );
	vec_attributes.emplace_back( std::make_pair( "TranslationalStiffnessZ", m_TranslationalStiffnessZ ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessX", m_RotationalStiffnessX ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessY", m_RotationalStiffnessY ) );
	vec_attributes.emplace_back( std::make_pair( "RotationalStiffnessZ", m_RotationalStiffnessZ ) );
}
void IfcBoundaryNodeCondition::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBoundaryCondition::getAttributesInverse( vec_attributes_inverse );
}
void IfcBoundaryNodeCondition::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundaryCondition::setInverseCounterparts( ptr_self_entity );
}
void IfcBoundaryNodeCondition::unlinkFromInverseCounterparts()
{
	IfcBoundaryCondition::unlinkFromInverseCounterparts();
}
