/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcClassificationSelect.h"
#include "ifcpp/IFC4/include/IfcMaterial.h"
#include "ifcpp/IFC4/include/IfcMaterialClassificationRelationship.h"

// ENTITY IfcMaterialClassificationRelationship 
IfcMaterialClassificationRelationship::IfcMaterialClassificationRelationship( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcMaterialClassificationRelationship::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcMaterialClassificationRelationship> copy_self( new IfcMaterialClassificationRelationship() );
	for( size_t ii=0; ii<m_MaterialClassifications.size(); ++ii )
	{
		auto item_ii = m_MaterialClassifications[ii];
		if( item_ii )
		{
			copy_self->m_MaterialClassifications.emplace_back( dynamic_pointer_cast<IfcClassificationSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_ClassifiedMaterial ) { copy_self->m_ClassifiedMaterial = dynamic_pointer_cast<IfcMaterial>( m_ClassifiedMaterial->getDeepCopy(options) ); }
	return copy_self;
}
void IfcMaterialClassificationRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCMATERIALCLASSIFICATIONRELATIONSHIP" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_MaterialClassifications.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcClassificationSelect>& type_object = m_MaterialClassifications[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_ClassifiedMaterial ) { stream << "#" << m_ClassifiedMaterial->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcMaterialClassificationRelationship::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcMaterialClassificationRelationship::toString() const { return L"IfcMaterialClassificationRelationship"; }
void IfcMaterialClassificationRelationship::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcMaterialClassificationRelationship, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readSelectList( args[0], m_MaterialClassifications, map );
	readEntityReference( args[1], m_ClassifiedMaterial, map );
}
void IfcMaterialClassificationRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	if( !m_MaterialClassifications.empty() )
	{
		shared_ptr<AttributeObjectVector> MaterialClassifications_vec_object( new AttributeObjectVector() );
		std::copy( m_MaterialClassifications.begin(), m_MaterialClassifications.end(), std::back_inserter( MaterialClassifications_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "MaterialClassifications", MaterialClassifications_vec_object ) );
	}
	vec_attributes.emplace_back( std::make_pair( "ClassifiedMaterial", m_ClassifiedMaterial ) );
}
void IfcMaterialClassificationRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcMaterialClassificationRelationship::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcMaterialClassificationRelationship::unlinkFromInverseCounterparts()
{
}
