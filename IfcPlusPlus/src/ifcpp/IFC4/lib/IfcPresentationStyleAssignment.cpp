/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationStyleAssignment.h"
#include "ifcpp/IFC4/include/IfcPresentationStyleSelect.h"

// ENTITY IfcPresentationStyleAssignment 
IfcPresentationStyleAssignment::IfcPresentationStyleAssignment( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcPresentationStyleAssignment::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcPresentationStyleAssignment> copy_self( new IfcPresentationStyleAssignment() );
	for( size_t ii=0; ii<m_Styles.size(); ++ii )
	{
		auto item_ii = m_Styles[ii];
		if( item_ii )
		{
			copy_self->m_Styles.emplace_back( dynamic_pointer_cast<IfcPresentationStyleSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPresentationStyleAssignment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPRESENTATIONSTYLEASSIGNMENT" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_Styles.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcPresentationStyleSelect>& type_object = m_Styles[ii];
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
	stream << ");";
}
void IfcPresentationStyleAssignment::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPresentationStyleAssignment::toString() const { return L"IfcPresentationStyleAssignment"; }
void IfcPresentationStyleAssignment::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPresentationStyleAssignment, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readSelectList( args[0], m_Styles, map );
}
void IfcPresentationStyleAssignment::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	if( !m_Styles.empty() )
	{
		shared_ptr<AttributeObjectVector> Styles_vec_object( new AttributeObjectVector() );
		std::copy( m_Styles.begin(), m_Styles.end(), std::back_inserter( Styles_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "Styles", Styles_vec_object ) );
	}
}
void IfcPresentationStyleAssignment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
}
void IfcPresentationStyleAssignment::setInverseCounterparts( shared_ptr<BuildingEntity> )
{
}
void IfcPresentationStyleAssignment::unlinkFromInverseCounterparts()
{
}
